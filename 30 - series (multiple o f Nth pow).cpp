#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //1^2 * 2^2* ... *n^2
    int i,mul=1,n;
    cin>>n;
    for(i=1; i<=n; i++){
        mul = mul * pow(i,2);
    }
     cout<<mul<<endl;
}
