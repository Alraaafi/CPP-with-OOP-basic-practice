#include<iostream>
using namespace std;
int main()
{
    int n1;

    cout<<"Enter Result:";
    cin>>n1;
    if(100<n1) cout<<n1<<" Is Invalid"<<endl;
    else if(100>=n1 && n1>=80) cout<<n1<<" Is A+"<<endl;
    else if(n1>=70) cout<<n1<<" Is A"<<endl;
    else if(n1>=60) cout<<n1<<" Is A-"<<endl;
    else if(n1>=50) cout<<n1<<" Is B"<<endl;
    else if(n1>=40) cout<<n1<<" Is C"<<endl;
    else if(n1>=33) cout<<n1<<" Is D"<<endl;
    else if(n1>=0 && n1<=32) cout<<n1<<" Is F fail"<<endl;
    else cout<<n1<<" Is Invalid"<<endl;
}

