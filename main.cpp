#include <iostream>
#include <string>
#include "Rearrange.h"
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"

Individual* execute(Individual* indPtr, Mutator* mPtr, int k)
{
    Individual* dna =new Individual(mPtr -> mutate(*indPtr,k));
    return dna;
}

int main()
{
    std::string sequence1;
    int shift1;
    std::string sequence2;
    int shift2;
    std::cin>>sequence1;
    std::cin>>shift1;
    std::cin>>sequence2;
    std::cin>>shift2;
    Individual b1(sequence1);Individual b2(sequence2);
    BitFlip random1;
    Rearrange random2;


    Individual* individual1=execute(&b1, &random1, shift1);
    Individual* individual2=execute(&b2, &random2, shift2);

    std::cout<<individual1->binaryString<<" ";
    std::cout<<individual2->binaryString<<" ";
    std::cout<<individual2->getMaxOnes();

    return 0;
}