#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,ranNum;
    for(i=1; i<=50; i++){
    ranNum = rand()%10+1; //rand num 1 to 10
    printf("%d\n",ranNum);
    }
}



