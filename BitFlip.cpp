#include <iostream>
#include <string>
#include "Mutator.h"
#include "Individual.h"
#include "BitFlip.h"

Individual* BitFlip::mutate(Individual* list, int k)

{
    listLength = list -> getLength();
    end_digit = k % listLength;
    
    if (end_digit != 0)
    {
        end_digit = end_digit -1;
    }
    else
    {
        end_digit = listLength-1;
    }
    
    list -> flipBit(end_digit);
    return list;
}