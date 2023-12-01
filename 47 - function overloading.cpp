#include<iostream>
#include<conio.h>
using namespace std;

void sum(int a, int b){
    int add = a+b;
    cout<<add<<endl;
}

void sum(int a, int b, int c){ //same name but diffrents perametter
    cout<<a+b+c<<endl;
}

int main(){
    sum(5,3);
    sum(10,20,20);
}
