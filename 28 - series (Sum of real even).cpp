#include<iostream>
using namespace std;
int main()
{
    //2+4+6...n
    int i,sum=0,n;
    cin>>n;
    for(i=2; i<=n; i+=2){
        sum = sum + i;
    }
     cout<<sum<<endl;
}
