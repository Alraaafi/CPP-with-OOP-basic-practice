#include<iostream>
using namespace std;
int main()
{
    //1+3+5...n
    int i,sum=0,n;
    cin>>n;
    for(i=1; i<=n; i+=2){
        sum = sum + i;
    }
     cout<<sum<<endl;
}
