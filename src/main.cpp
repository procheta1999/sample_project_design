#include "../include/frames.h"
#include "../include/metro_rail.h"
#include "../include/bus.h"
#include "../include/checkDays.h"
#include "../include/checkPrice.h"
#include "../include/split.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>  
using namespace std;

int main()
{
	string location;
	string location_code;
	int days;
	cout<<"Where to put ad: ";
	cin>>location;
	cout<<endl;
	cout<<"Location code: ";
	cin>>location_code;
	cout<<endl;
	cout<<"Duration: ";
	cin>>days;
	cout<<endl;
	vector<string> locationArray; 
	locationArray= SplitString(location_code);
	if(checkDays(location,days)==true)
	{
		vector<int> price=checkPrice(locationArray);
		if(location=="Metro")
		{
			MetroRailFrames customer1(locationArray,price,days);
			customer1.outputBill();
			// customer1.getData();
		}
		else
		{
			BusFrames customer2(locationArray,price,days);
			customer2.outputBill();
		}
	}
	else
	{
		exit(0);
	}
}