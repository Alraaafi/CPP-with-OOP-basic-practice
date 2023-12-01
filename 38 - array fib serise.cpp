#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int fib[n],first=0,second=1;
    for(i=0; i<n; i++){
        if(i<=1) fib[i] = i;
        else{
            fib[i] = first + second;
            first = second;
            second = fib[i];
        }
    }

    cout<<n<<"Th Fibonacci serise is = \n";
    for(i=0; i<n; i++){
        cout<<fib[i]<<" ";
    }
}
