#include "../include/checkDays.h"
#include <iostream>
#include <string>
using namespace std;
bool checkDays(string location, int days)
{
    if(location=="Metro")
    {
        if(days<20)
        {
            cout<<"Sorry.Minimum booking is 20 days for Metro"<<endl;
            return false;
        }
    }
    else
    {
        if(days<15)
        {
            cout<<"Sorry.Minimum booking is 15 days for Bus"<<endl;
            return false;
        }
    }
    return true;
}