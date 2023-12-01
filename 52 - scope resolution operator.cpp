#include<iostream>
using namespace std;

int n = 10; //Global variable

int main(){

   int n = 5; //local variable. coz, the variable under the function
   ::n = 100; //global variable change to use :: that
    //Allows local variable priority is max;
   cout<<"Local variable print out: "<<n<<endl;
   //Global Variable Access for ::Var
   cout<<"Local variable print out: "<<::n<<endl;
}
