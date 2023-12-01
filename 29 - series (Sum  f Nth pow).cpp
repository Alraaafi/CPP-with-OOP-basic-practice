#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //1^4+2^4...n^4
    int i,sum=0,n;
    cin>>n;
    for(i=1; i<=n; i++){
        sum = sum + pow(i,4);
    }
     cout<<sum<<endl;
}
