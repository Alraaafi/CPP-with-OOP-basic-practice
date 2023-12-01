#include<iostream>
using namespace std;
int fact(int n){
    if(n==1)
        return 1;//1.base case for stop process
    else{
        return n*fact(n-1); //2.recursive call for active process
    }
}
int main(){
    int f1 = fact(4);
    cout<<f1<<endl;
}
