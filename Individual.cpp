#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
#include "Individual.h"

Individual::Individual(int lengthofBinaryDNA)
 {
    for (int i=0;i<lengthofBinaryDNA;i++)
    {
        binaryString=binaryString+'0';
    }
}

Individual::Individual (std::string initialString)                                  
{
    binaryString=initialString;
}

void Individual::flipBit(int pos)
{
    int size=binaryString.length();
    if (pos<-1 || pos>size)
    {
        return;
    }
    if (binaryString[pos]=='0')
    {
        binaryString[pos]='1';
    }
    else
    {
        binaryString[pos]='0';
    }
}

int Individual::getBit(int pos)
{
    int size=binaryString.length();
    if (pos<size && pos>-1)
    {
        return binaryString[pos];
    }
    else
    {
        return -1;
    }
}

int Individual::getLength()
{return binaryString.length();}

int Individual::getMaxOnes()
{
    int Maxones=0;
    int total=0;
    int size=binaryString.length();
    for (int i = 0; i < size; i++)
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