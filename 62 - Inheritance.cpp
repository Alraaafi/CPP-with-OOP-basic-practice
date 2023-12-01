#include<iostream>
using namespace std;

class person //parent class
{
public:
    string name;
    void dis()
    {
        cout << name <<endl;
    }
};

class student : public person //child class
{
public:
    int id;
    void dis2()
    {
        dis();
        cout << id << endl;
    }
};

int main()
{
    student person1;
    person1.id = 22111128;
    person1.name = "Md. Tanvir Ahmed";
    person1.dis2();
}
