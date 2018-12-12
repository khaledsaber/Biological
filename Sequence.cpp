#include "Sequence.h"
#include<cstring>
#include <iostream>

using namespace std;
Sequence::Sequence()
{
    //default constructor
    seq = new char[0];
    strcpy(seq , "");
}

Sequence::Sequence(char *s){
    // parametrized constructor
    seq = new char[strlen(s)+1];
    strcpy(seq , s );

}
Sequence::Sequence(const Sequence& rhs){
    //copy constructor
    seq = rhs.seq;
}

Sequence::~Sequence(){
    //destructor to deallocate memory

    delete [] seq;

}


