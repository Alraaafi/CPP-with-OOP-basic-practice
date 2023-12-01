#include<iostream>
using namespace std;

class detais{ //class declearation
public:
    int age;
    float gpa;
};

int main(){
    detais rafi,mamun; //object declaration

    rafi.age = 20;
    rafi.gpa = 4.06;

    mamun.age = 21;
    mamun.gpa = 3.5;

    cout<<"age of mamun = "<<mamun.age<<endl;
    cout<<"gpa of rafi = "<<rafi.gpa<<endl;
}
