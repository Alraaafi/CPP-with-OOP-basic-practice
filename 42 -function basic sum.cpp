#include<iostream>
using namespace std;
void summation(int,int); //function prototype
int main(){
    summation(20,40);
    summation(12,5);
}

void summation(int a, int b){
    int sum = a+b;
    cout<<"SUMMATION: "<<sum<<endl;
}
