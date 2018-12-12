#ifndef SEQUENCE_H
#define SEQUENCE_H


class Sequence
{

  	protected:
        char * seq;
    public:
 	 	// constructors and destructor
        Sequence();
        Sequence(char *s);
        Sequence(const Sequence& rhs);
        virtual ~Sequence();
 	 	// pure virtual function that should be overridden because every
        // type of sequence has its own details to be printed
        virtual void Print()=0;
 	 	// friend function that will find the LCS (longest common
        // subsequence) between 2 sequences of any type, according to
        // polymorphism
        friend char* Align(Sequence * s1, Sequence * s2);

        char* get(){
         return seq;
        }

};

#endif // SEQUENCE_H
