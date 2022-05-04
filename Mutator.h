#ifndef Mutator_H
#define Mutator_H
#include "Individual.h"
#include <iostream>
#include <string>

class Mutator 
{
    public:
    virtual Individual mutate(Individual list,int k) = 0;
};

#endif

