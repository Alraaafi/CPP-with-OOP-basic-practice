#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cin>>n;
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            cout<<col%2<<" ";
        }
        cout<<endl;
    }
}
