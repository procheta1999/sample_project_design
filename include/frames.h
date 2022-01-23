#ifndef FRAMES_H
#define FRAMES_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Frames
{
    protected:
       vector<string> locationCode;
    //    string Location;
       vector<int> pricePerDay;
       int days;    
    public:
    //    Frames();
       Frames(vector<string> arg_location_code,vector<int> arg_price_day,int arg_days);
       virtual void outputBill()=0;
};
#endif