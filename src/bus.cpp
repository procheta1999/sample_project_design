#include "../include/bus.h"
#include <iostream>
#include <string>
using namespace std;
BusFrames::BusFrames(string arg_location_code,int arg_price_day,int arg_days):Frames(arg_location_code, arg_price_day,arg_days)
{
    cout<<"Your Order is Taken"<<endl;
}
void BusFrames::outputBill()
{
    cout<<"Output: "<<endl;
    cout<<"Bill amount: ("<<pricePerDay<<"*"<<days<<") "<<pricePerDay*days<<endl;
}