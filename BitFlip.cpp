#include <iostream>
#include <string>
#include <stdlib.h>
#include "Mutator.h"
#include "Individual.h"
#include "BitFlip.h"

Individual BitFlip::mutate(Individual list, int k)

{
    k-=1;
    k=k%list.getLength();
    list.flipBit(k);
    return list;
}