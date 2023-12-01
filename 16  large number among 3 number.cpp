#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;

    cout<<"Enter Three num:";
    cin>>n1>>n2>>n3;

    if(n1>n2 && n1>n3) cout<<n1<<" Is big"<<endl;
    else if(n2>n1 && n2>n3) cout<<n2<<" Is big"<<endl;
    else cout<<n3<<" Is big"<<endl;
}

