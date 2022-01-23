#ifndef METRO_RAIL
#define METRO_RAIL
#include "./frames.h"
class MetroRailFrames:public Frames
{
    public:
    //    MetroRailFrames();
       MetroRailFrames(vector<string> arg_location_code,vector<int> arg_price_day,int arg_days);
       void getData();
       void outputBill();
};     
#endif