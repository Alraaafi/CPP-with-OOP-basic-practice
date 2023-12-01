#include<iostream>
using namespace std;
//function - 1
int call1(int num){
    num = 50;
}

//function - 2
int call2(int *n){
    *n = 100;
}
int main(){
    //passing value by function
    int a = 10;
    cout<<"Before function call a = "<<a<<endl;
    call1(a);
    cout<<"After function call a = "<<a<<endl;

    cout<<endl<<endl<<endl;
    //passing reference by function
    int b = 20;
    cout<<"Before function call b = "<<b<<endl;
    call2(&b);
    cout<<"After function call b = "<<b<<endl;

}
