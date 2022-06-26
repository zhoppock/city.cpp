//Zachary Hoppock
//city.cpp
//9/5/2020
//Input a city
//Version  #1
#include <iostream>

using namespace std;
int main()
{
string city;
string state;
int zip;

  cout << "What city do you live in?"<< endl;
  cin >> city;

  cout << "What state do you live in?"<< endl;
  cin >> state;

  cout << "What is your Zip Code?"<< endl;
  cin >> zip;

  cout << "\033[2J\033[0;0H";

cout << city << ", "<< state << " " << zip;
//cout << state;
//cout << zip;

  return 0;
}