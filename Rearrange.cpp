#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include "Rearrange.h"

Individual* Rearrange::mutate(Individual* list, int k)
{
    listLength = list -> getLength();
    end_digit = k % listLength;
    
    if (end_digit != 0)
    {
        end_digit = end_digit -1;
    }
    else
    {
        end_digit = listLength -1;
    }
    
    list ->bitRearrange(end_digit);
    return list;
}