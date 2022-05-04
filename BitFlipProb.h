#ifndef BitFlipProb_H
#define BitFlipProb_H
#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"

class BitFlipProb : public Mutator
{
    public:
    BitFlipProb(double likelihood);
    Individual mutate(Individual list, int k);
    
    private:
    double prob=0;;
};

#endif
