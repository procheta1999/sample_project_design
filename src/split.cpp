#include "../include/split.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
vector<string> SplitString(string str)
{
    vector<string> stringArray;
    string string_vector_element;
    stringstream ss(str);
    while(getline(ss,string_vector_element,','))
    {
        stringArray.push_back(string_vector_element);
    }
    return stringArray;
}