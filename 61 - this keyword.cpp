#include<iostream>
using namespace std;
class myClass
{
public:
    string nm;
    myClass(string nm){
        this -> nm  = nm; //This keyword
    }
    void display(){
        cout << nm << endl;
    }
};
int main()
{
    myClass name1("Tanvir Rafi");
    name1.display();

}
