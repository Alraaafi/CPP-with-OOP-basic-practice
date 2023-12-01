#include<iostream>
using namespace std;

class info{
public:
    string nam;
    int age;
    void shaw(){
        cout << "Name is: " <<nam << "\t Age is: " <<age <<endl;
    }
};

int main(){
    info rafi,sajid,fahad;
    rafi.nam = "Tanvir";
    rafi.age = 20;

    fahad.nam = "Ahad";
    fahad.age = 21;

    sajid.nam = "sajid";
    sajid.age = 21;

    rafi.shaw();
    sajid.shaw();
    fahad.shaw();
}
