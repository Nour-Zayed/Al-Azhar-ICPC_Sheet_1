#include <iostream>

using namespace std;

int main()
{
int days;

cin>>days;

int reminder=days%365;
int years=days/365;

days=reminder;


 reminder= days%30;
int months=days/30;
cout <<years<<" years\n";
cout <<months<<" months\n";
cout <<reminder<<" days";


    return 0;
}
