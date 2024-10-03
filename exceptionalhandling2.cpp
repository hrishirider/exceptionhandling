#include <iostream>
using namespace std;

int main() 
{
    int age;
    cout<<"Enter age: ";
    cin>>age;
    try
    {
        if (age<18)
        {
            throw age; 
        }
        else
        {
            cout<<"Age: "<<age<<"\nAPPROVED!"<<endl;
        }
    }
    catch (int a)
    {
        cout<<"\nError: Underage! ("<<age<<")"<<endl;
    }
}
//output
/*Enter age: 13

Error: Underage! (13)*/