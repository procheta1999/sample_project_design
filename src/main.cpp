#include "../include/frames.h"
#include "../include/metro_rail.h"
#include "../include/bus.h"
#include "../include/checkDays.h"
#include "../include/checkPrice.h"
#include <iostream>
#include <string>
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
	if(checkDays(location,days)==true)
	{
		int price=checkPrice(location_code);
		if(location=="Metro")
		{
			MetroRailFrames customer1(location_code,price,days);
			customer1.outputBill();
			// customer1.getData();
		}
		else
		{
			BusFrames customer2(location_code,price,days);
			customer2.outputBill();
		}
	}
	else
	{
		exit(0);
	}
}