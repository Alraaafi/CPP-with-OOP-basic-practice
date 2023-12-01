#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two Numbers: ";
    cin>>n1>>n2;

    int sum = n1 + n2;
    cout << "Summation is : " <<sum<<endl;

    int sub = n1 - n2;
    cout << "Subtraction is : " <<sub<<endl;

    double div = (double)n1 / n2; //type casting
    cout << "Division is : " <<div<<endl;

    int rem = n1 % n2;
    cout << "Reminder is : " <<rem<<endl;

}
