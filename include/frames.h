#ifndef FRAMES_H
#define FRAMES_H
#include <iostream>
#include <string>
using namespace std;
class Frames
{
    protected:
       string locationCode;
    //    string Location;
       int pricePerDay;
       int days;    
    public:
    //    Frames();
       Frames(string arg_location_code,int arg_price_day,int arg_days);
       virtual void outputBill()=0;
};
#endif