#ifndef BUS_H
#define BUS_H
#include "./frames.h"
class BusFrames:public Frames
{
    public:
    //    MetroRailFrames();
       BusFrames(string arg_location_code,int arg_price_day,int arg_days);
       void outputBill();
};     
#endif