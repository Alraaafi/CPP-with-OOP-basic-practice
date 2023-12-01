#include<iostream>
using namespace std;
int main()
{
    int arr[3][2],row,col;

    for(row=0; row<3; row++){
        for(col=0; col<2; col++){
            cin>>arr[row][col];
        }
    }

    cout<<endl;
    cout<<endl;

    for(row=0; row<3; row++){
        for(col=0; col<2; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

}
