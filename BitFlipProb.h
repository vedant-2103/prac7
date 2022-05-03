#ifndef BitFlipProb_H
#define BitFlipProb_H
#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"

class BitFlipProb : public Mutator
{
    public:
    Individual* mutate(Individual* list, int k);
    
    private:
    double probability;
};

#endif
