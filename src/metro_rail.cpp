#include "../include/metro_rail.h"
#include <iostream>
#include <string>
// MetroRailFrames::MetroRailFrames():Frames()
// {
//     cout<<"Your Order is not Taken"<<endl;
// }
MetroRailFrames::MetroRailFrames(string arg_location_code,int arg_price_day,int arg_days):Frames(arg_location_code, arg_price_day,arg_days)
{
    cout<<"Your Order is Taken."<<endl;
}
void MetroRailFrames::getData()
{
    cout<<pricePerDay<<endl;
    cout<<days<<endl;
}
void MetroRailFrames::outputBill()
{
    cout<<"Output: "<<endl;
    cout<<"Bill amount: ("<<pricePerDay<<"*"<<days<<") "<<pricePerDay*days<<endl;
}