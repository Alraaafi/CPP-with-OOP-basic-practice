#include<iostream>
using namespace std;

class info{
public:
    string nam;
    int age;

    info(string a, int b){
        nam = a;
        age = b;
    }

    info(){
        cout<< "Hi! I'm Defaults"<<endl;
    }


    void shaw(){
        cout << "Name is: " <<nam << "\t Age is: " <<age <<endl;
    }
};

int main(){
    info defalultNam;
    info rafi("Tanvir",20),sajid("sajid",21);

    rafi.shaw();
    sajid.shaw();
}
