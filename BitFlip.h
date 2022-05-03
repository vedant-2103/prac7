#ifndef BitFlip_H
#define BitFlip_H
#include <iostream>
#include <string>
#include "Mutator.h"
#include "Individual.h"

class BitFlip : public Mutator 
{
    public:
    Individual* mutate(Individual* list, int k);
    
    private:
    int listLength;
    int end_digit;
};
#endif


