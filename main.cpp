#include <iostream>
#include <string>
#include "Rearrange.h"
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"

Individual* execute(Individual* indPtr, Mutator* mPtr, int k)
{
    Individual* dna = mPtr -> mutate(indPtr,k);
    return dna;
}

int main()
{
    //int k1;
    std::string binarystr1;
    //int k2;
    std::string binarystr2;
    return 0;
}