#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,ranNum,num;
    while(1){
    printf("enter 1 to 5 num:");
    cin>>num;
    ranNum = rand()%5+1; //rand num 1 to 10
    if(ranNum==num) cout<<"WIN!"<<endl;
    else cout<<"LOST!"<<endl;
    }
}



