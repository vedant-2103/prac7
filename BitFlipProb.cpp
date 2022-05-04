#include <iostream>
#include <string>
#include <stdlib.h>
#include "Mutator.h"
#include "BitFlipProb.h"
#include "Individual.h"

BitFlipProb::BitFlipProb(double likelihood){
    prob=likelihood;
}

Individual BitFlipProb::mutate(Individual list, int k)
{
   for (int x=0;x<list.getLength();x++){
        if (prob==1)
        {
            list.flipBit(x);
            continue;
        }
        if (prob==0)
        {
            list.flipBit(x);
            continue;
        }
        double temp=float(rand())/float(RAND_MAX);
        if (prob>=temp)
        {
            list.flipBit(x);
        }
    }
    return list;
}