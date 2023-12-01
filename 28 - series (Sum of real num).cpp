#include<iostream>
using namespace std;
int main()
{
    //1+2+3...n
    int i,sum=0,n;
    cin>>n;
    for(i=1; i<=n; i++){
        sum = sum + i;
    }
     cout<<sum<<endl;
}
