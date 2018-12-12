#include <iostream>
#include <fstream>
#include<cstring>
#include<strings.h>
#include "DNA.h"
#include "Sequence.h"
#include "CodonsTable.h"
#include"RNA.h"
using namespace std;


//struct Codon
//{
//  	char value[4];    	    // 4th location for null character
//    char AminoAcid;  	    // corresponding AminoAcid according to Table
//};



int main()
{
//    RNA r("UCTUUT" , mRNA);
//    cout<<r.getSequence()<<endl;
//


//
//
//    DNA d = r.ConvertToDNA();
//    cout<<d.getSequence();


/*
    DNA *a = new DNA("ACCGGTCA",tail , 0 , 6);
    cout<<a->getSequence()<<endl;
//    cout<<a->getStartIndex()<<endl;
//    cout<<a->getEndIndex()<<endl;
//    cout<<a->getType()<<endl;
//    a->BuildComplementaryStrand();
//    a->Print();

 RNA e = a->ConvertToRNA();
 e.setType(mRNA_exon);
 cout<<e.getSequence()<<endl;
 cout<<e.getType();


//    DNA *c = a->getComplementaryStrand();
//    cout<<c->getStartIndex()<<endl;
//    cout<<c->getEndIndex()<<endl;
//    cout<<c->getSequence()<<endl;


/*
    DNA *b = c;

    cout<<b->getSequence()<<endl;
    cout<<b->getStartIndex()<<endl;
    cout<<b->getEndIndex()<<endl;



*/

/*
RNA *r = new RNA("DFGG" , mRNA_intron) ;

cout<<r->getType()<<endl;
RNA *v = r;
cout<<v->getType()<<endl;
cout<<v->getSequence();

int choice;
do
{
cout<<"Please choose a sequence to enter from the following:"<<endl;
cout<<"1-DNA "<<endl;
cout<<"2-RNA "<<endl;
cout<<"3-Protein"<<endl;

cin>>choice;
if(choice==1){

}




}while(choice!=0);


*/






}
