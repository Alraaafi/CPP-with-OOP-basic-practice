#include<iostream>
using namespace std;
int main()
{
    int y;

    cout<<"Enter Year:";
    cin>>y;

    if( (y%400==0) || (y%4==0 && y%100!=0))
        cout<<y<<" Is Leap year"<<endl;
    else
    cout<<y<<" Is Not Leap Year"<<endl;
}

