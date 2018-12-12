#include "DNA.h"
#include<cstring>
#include <iostream>
#include<cstring>
#include<strings.h>
#include<string>
#include"Sequence.h"
#include"RNA.h"
using namespace std;
class RNA;

DNA::DNA():Sequence()
{
     //default constructor

    startIndex = 0;
    endIndex = 0;




}

DNA::DNA( char * s, DNA_Type atype ,int Start , int End ):Sequence(s){
    //parametrized constructor
    type = atype;
    startIndex = Start;
    endIndex = End;

 }

DNA::DNA(char * s, DNA_Type atype):Sequence(s){
     type = atype;




}

DNA::~DNA(){
     //destructor to free the memory
     delete [] seq;
     delete comp_strand;

 }
void DNA::setSequence(char* s){
    seq = new char[strlen(s)+1];
    strcpy(seq , s );
}
void DNA::setStartIndex(int s){
    startIndex = s;
}

void DNA::setEndIndex(int e ){
    endIndex = e;
}

int DNA::getStartIndex(){
    return startIndex;
}

int DNA::getEndIndex(){
    return endIndex;
}

char* DNA::getSequence(){
    return seq;
}

string DNA::getType(){

    if(type==0){
        return "promoter";
    }
    else if (type==1){
        return "motif";
    }
    else if(type==2){
        return "tail";
    }
    else if(type==3){
        return "noncoding";
    }

}

DNA::DNA(const DNA& rhs){
    seq = rhs.seq;
    type = rhs.type;

}

void DNA::BuildComplementaryStrand(){
    int start = getStartIndex();
    int end = getEndIndex();
    int subSize = end - start+1;
    char* tempSub = new char[subSize];
    memcpy(tempSub ,&seq[start] , subSize  );
    tempSub[subSize] = '\0';
    string sub ;
    sub= tempSub;

   for(int i=0 ; i<subSize ; i++){
        if(sub[i]=='T'){

            sub[i]='A';
        }
        else if(sub[i]=='A'){
            sub[i] = 'T';
        }
        else if(sub[i]=='C'){
            sub[i] = 'G';
        }
        else if(sub[i]=='G'){
            sub[i] = 'C';
        }
    }

    char* comSeq = new char[sub.length()+1];
    strcpy(comSeq ,sub.c_str());
    comp_strand = new DNA();
    comp_strand->setSequence(comSeq);

}


DNA* DNA::getComplementaryStrand(){
         return comp_strand;
}

void DNA::Print(){
    cout<<"The DNA strand is: "<<getSequence()<<endl;
    cout<<"of type :"<<getType()<<endl;
    cout<<"its complementary strand is :"<<comp_strand->getSequence()<<endl;
    cout<<"and it starts from index "<<getStartIndex()<<" to "<<getEndIndex()<<" from the original strand"<<endl;
}

RNA DNA::ConvertToRNA(){
   char* temp =getSequence();
   string DNASeq = getSequence();
   for(int i=0 ; i<strlen(temp) ; i++){
     if(DNASeq[i]=='T'){
        DNASeq[i]= 'U';
     }
   }
   char * RNASequence = new char[strlen(temp)+1];
   strcpy(RNASequence ,DNASeq.c_str());
   RNA r(RNASequence , mRNA);
   return r;

}

