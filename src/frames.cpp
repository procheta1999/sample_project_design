#include "../include/frames.h"
#include <iostream>
#include <string>
using namespace std;
// Frames::Frames()
// {
//     locationCode="Null";
//     pricePerDay=1;
//     days=1;
// }
Frames::Frames(vector<string> arg_location_code,vector<int> arg_price_day,int arg_days)
{
    locationCode=arg_location_code;
    pricePerDay=arg_price_day;
    days=arg_days;
}
