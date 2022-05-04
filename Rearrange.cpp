#include <iostream>
#include <string>
#include <stdlib.h>
#include "Individual.h"
#include "Mutator.h"
#include "Rearrange.h"

Individual Rearrange::mutate(Individual list, int k)
{
    std::string tempString="";
    if (list.getLength()==1)
    {
        return list;
    }

    if(k==1)
    {
        return list;
    }

    if(list.getLength()==2 && k==2)
    {
        tempString=list.binaryString.substr(1,1);
        tempString=tempString+list.binaryString.substr(0,1);
        list.binaryString=tempString;
        return list;
    }
    k=k%list.getLength();
    k=k-1;

    if(k==0)
    {
        return list;
    }
    if (k==-1)
    {
        tempString=list.binaryString.substr(list.getLength()-1,list.getLength()-1);
        int size=list.getLength();

        tempString=list.binaryString[list.getLength()-1];
        for (int x=0;x<size-1;x++)
        {
            tempString+=list.binaryString[x];
        }
        list.binaryString=tempString;
        return list;
    }

    tempString=list.binaryString.substr(k,list.getLength()-1);
    tempString=tempString+list.binaryString.substr(0,k);
    list.binaryString=tempString;
    return list;
}