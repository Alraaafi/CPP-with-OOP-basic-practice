#include<iostream>
using namespace std;
double mal(double,double); //prototype
int main(){
    double res = mal(2.5,2);
    cout<<res<<endl;
}
double mal(double a,double b){
    double c = a * b;
    return c;
}
