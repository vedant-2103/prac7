#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <iostream>
#include <string>

class Individual
{
    public:
    Individual(int lengthofBinaryDNA);
    Individual(std::string initialString);
    std::string binaryString="";
    std::string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();

};
#endif
