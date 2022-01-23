#include "../include/checkPrice.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> checkPrice(vector<string> locationArray)
{
    vector<int> priceArray;
    for(int i=0;i<locationArray.size();i++)
    {
        if(locationArray[i]=="IM01")
    {
        priceArray.push_back(350);
    }
    else if(locationArray[i]=="OM01")
    {
        priceArray.push_back(950);
    }
    else if(locationArray[i]=="AP01") 
    {
        priceArray.push_back(600);
    }
    else if(locationArray[i]=="SB01")
    {
        priceArray.push_back(550);
    }
    else
    {
        priceArray.push_back(800);
    }
    }
    return priceArray;
    
}