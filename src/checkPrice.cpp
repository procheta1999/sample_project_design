#include "../include/checkPrice.h"
#include <iostream>
#include <string>
using namespace std;
int checkPrice(string location_code)
{
    if(location_code=="IM01")
    {
        return 350;
    }
    else if(location_code=="OM01")
    {
        return 950;
    }
    else if(location_code=="AP01") 
    {
        return 600;
    }
    else if(location_code=="SB01")
    {
        return 550;
    }
    else
    {
        return 800;
    }
}