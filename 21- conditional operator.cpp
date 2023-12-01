#include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter A num for Even Odd: ";
    cin>>n1;
    n1%2==0?cout<<"Even\n":cout<<"Odd"<<endl;

    int num1,num2,max;
    cout<<"Enter 2 num for Max: ";
    cin>>num1>>num2;
    max = num1 > num2 ? num1 : num2 ;
    cout<<max<<endl;

}
