#ifndef PROTEIN_H
#define PROTEIN_H
#include <iostream>
#include<cstring>
#include<strings.h>
#include "DNA.h"
#include "Sequence.h"
#include"RNA.h"
using namespace std;


enum Protein_Type {Hormon, Enzyme, TF, Cellular_Function};

class protein:public Sequence
{
    private:
        Protein_Type type;
      public:
 	 	// constructors and destructor
 	 	protein();
 	 	protein(char * p);
 	 	~protein();
 	 	// return an array of DNA sequences that can possibly
                // generate that protein sequence
           DNA* GetDNAStrandsEncodingMe(const DNA & bigDNA);
};

#endif // PROTEIN_H
