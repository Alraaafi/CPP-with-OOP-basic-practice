#include<iostream>
//#include<iomanip>
using namespace std;
int main(){
    float n1,n2;
    cout<<"Enter two Numbers: ";
    cin>>n1>>n2;


    cout<<showpoint; //show digit after decimal
    //cout<<setprecision(10); //overall show 10 digit
    cout<<fixed; //after fixed decimal show 10 digit


    float sum = n1 + n2;
    //cout <<setw(20) << "Summation is : " <<sum<<endl;//capture previous n character for setw

    cout<<noshowpoint; //after no digit after decimal

    float sub = n1 - n2;
    cout << "Subtraction is : " <<sub<<endl;

    double div = (double)n1 / n2; //type casting
    cout << "Division is : " <<div<<endl;

    int rem = (int)n1 % (int)n2; //reminder is always int
    cout << "Reminder is : " <<rem<<endl;

}
