#ifndef BUS_H
#define BUS_H
#include "./frames.h"
#include <string>
#include <vector>
class BusFrames:public Frames
{
    public:
    //    MetroRailFrames();
       BusFrames(vector<string> arg_location_code,vector<int> arg_price_day,int arg_days);
       void outputBill();
};     
#endif