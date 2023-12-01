#include<iostream>
using namespace std;
class myClass
{
private:
    string password;
public:
    void getpass(string p){
        password = p;
    }
    string shwPass(){
    return password;
    }
};
int main()
{
    myClass p1;
    p1.getpass("alraaafi");
    cout << p1.shwPass() <<endl;
}
