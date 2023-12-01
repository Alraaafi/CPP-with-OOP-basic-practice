#include<iostream>
using namespace std;

void disArr(int a[],int sz){
        int i;
        for(i=0; i<sz;i++){
            cout<<a[i]<<endl;
        }
}

int main(){
    int arr[10] = {2,4,5,6,8,3,9,4,7,1};
    disArr(arr,10);
}
