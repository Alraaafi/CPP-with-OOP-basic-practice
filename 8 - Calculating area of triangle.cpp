#include<iostream>
using namespace std;
int main(){
    double b,h,aOfT,aOfR,aOfC,r;

    cout<<"Enter Base , Height and Radious: ";
    cin>>b>>h>>r;

    aOfT = 1/2.0 * b * h;
    cout<<"Area Of triangle: "<<aOfT<<endl;

    aOfR = b * h;
    cout<<"Area Of Rectangle: "<<aOfR<<endl;

     aOfC = 3.1416 * r * r;
    cout<<"Area Of Circale: "<<aOfC<<endl;

}
