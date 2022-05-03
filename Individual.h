#ifndef Individual_H
#define Individual_H

#include <iostream>
#include <string>

class Individual
{
    public:
    Individual(int lengthofBinaryDNA);
    Individual(std::string initialString);
    std::string getString();
    int getBit(int pos);
    void flipBit(int pos);
    void bitRearrange(int pos);
    int getMaxOnes();
    int getLength();
    


    private:
    int lengthofBinaryDNA;
    std::string list_copy;
    std::string binaryString;
    std::string rearrange_bin_str;

};
#endif
