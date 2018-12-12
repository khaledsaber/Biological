#include "RNA.h"
#include <iostream>
#include<cstring>
#include<strings.h>
#include "DNA.h"
#include "Sequence.h"
using namespace std;


RNA::RNA():Sequence()
{
    type = mRNA;

}

RNA::RNA(char * seq, RNA_Type atype):Sequence(seq){
    type = atype;

}

RNA::RNA(const RNA& rhs){

     seq = rhs.seq;
     type = rhs.type;


}

RNA::~RNA(){
    delete [] seq;

}

void RNA::setType(RNA_Type atype){
    type = atype;


}

string RNA::getType(){

    if(type==0)
    {
        return "mRNA";
    }
    else if (type==1)
    {
        return "pre_mRNA";
    }
    else if(type==2)
    {
        return "mRNA_exon";
    }
    else if(type==3)
    {
        return "mRNA_intron";
    }

}


char* RNA::getSequence(){
    return seq;
}

void RNA::Print(){
    cout<<"The RNA strand is: "<<getSequence()<<endl;
    cout<<"of type :"<<getType()<<endl;



}

DNA RNA::ConvertToDNA(){
    char * temp = getSequence();
    string tempStr = temp;
    for(int i=0 ; i<strlen(temp) ; i++){
        if(tempStr[i]=='U'){
            tempStr[i]='T';
        }
    }

    char * DNASequence = new char[strlen(temp)];
    strcpy(DNASequence ,tempStr.c_str());
    DNA D;
    D.setSequence(DNASequence);
    return D;


}







