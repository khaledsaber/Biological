#ifndef RNA_H
#define RNA_H
#include <iostream>
#include<cstring>
#include<strings.h>
#include "DNA.h"
#include "Sequence.h"
using namespace std;
enum RNA_Type {mRNA, pre_mRNA, mRNA_exon, mRNA_intron};
class protein;
class RNA : public Sequence
{
  	private:
        RNA_Type type;
  	public:
 	 	// constructors and destructor
        RNA();
        RNA(char * seq, RNA_Type atype);
        RNA(const RNA& rhs);
       ~RNA();
 	 	// function to be overridden to print all the RNA information
        void Print();
 	 	// function to convert the RNA sequence into protein sequence
        // using the codonsTable object
        //protein ConvertToProtein(const CodonsTable & table);
 	 	// function to convert the RNA sequence back to DNA
        DNA ConvertToDNA();
        char* getSequence();
        void setType(RNA_Type atype);
        string getType();


};


#endif // RNA_H
