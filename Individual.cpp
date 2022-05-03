#include <iostream>
#include <string>
#include "Individual.h"

Individual::Individual (std::string initialString)                                  
{
    lengthofBinaryDNA=initialString.size();
    for (int i = 0; i < lengthofBinaryDNA; i++)
    {
        list_copy[i]='0';
    }
    binaryString=initialString;
}

void Individual::flipBit(int pos)
{
    if (binaryString[pos] =='1')
    {
        binaryString[pos] = '0';
    }
    else
    {
        binaryString[pos] = '1';
    }
}

int Individual::getBit(int pos)
{
    if (pos > lengthofBinaryDNA)
    {
        return -1;
    }
    if (binaryString[pos] == '1')
    {
        return 1;
    }
    return 0;
}

int Individual::getLength()
{return lengthofBinaryDNA;}

void Individual::bitRearrange(int pos)
{
    int num=0;
    for (int i = 0; i < lengthofBinaryDNA; i++)
    {
        if (i< lengthofBinaryDNA - pos)
        {
            rearrange_bin_str[i] = binaryString[pos + i];
            num++;
        }
        else
        {
            rearrange_bin_str[i] = binaryString[i - num];
        }
    }
    
    for (int i = 0; i < lengthofBinaryDNA; i++)
    {
        binaryString[i] = rearrange_bin_str[i];
    }
}

int Individual::getMaxOnes()
{
    int Maxones=0;
    int total=0;
    for (int i = 0; i < lengthofBinaryDNA; i++)
    {
        if (binaryString[i] =='1')
        {
            total=total+1;
        }
        if (total > Maxones)
        {
            Maxones = total;
        }
        else if (binaryString[i] == '0')
        {
            total = 0;
        }
    }
    return Maxones;
}

std::string Individual::getString()
{
    return binaryString;
}