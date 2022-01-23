#include "../include/bus.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
BusFrames::BusFrames(vector<string> arg_location_code,vector<int> arg_price_day,int arg_days):Frames(arg_location_code, arg_price_day,arg_days)
{
    cout<<"Your Order is Taken"<<endl;
}
void BusFrames::outputBill()
{
    cout<<"Output: "<<endl;
    long bill=0;
    for(int i=0;i<pricePerDay.size();i++)
    {
        bill=bill+(pricePerDay[i]*days);
    }
    cout<<"Bill amount: "<<bill<<endl;
}