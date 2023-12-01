#include<iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter Character:";
    cin>>ch;

    ch = tolower(ch);
    //or  toupper(ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        cout<<ch<<" Is Vawel"<<endl;
    else
    cout<<ch<<" Is Consonant"<<endl;
}

