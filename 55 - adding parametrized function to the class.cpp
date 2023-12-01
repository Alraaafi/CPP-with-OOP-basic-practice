#include<iostream>
using namespace std;

class info{
public:
    string nam;
    int age;

    void get(string n, int a){
        nam = n;
        age = a;
    }
    void shaw(){
        cout << "Name is: " <<nam << "\t Age is: " <<age <<endl;
    }
};

int main(){
    info rafi,sajid;

    sajid.get("sajidd",21);
    rafi.get("Tanvir",20);

    rafi.shaw();
    sajid.shaw();
}
