#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int age;
    string name;

    cout << "My First C++ Project!" << endl;
    cout << "Welcome to the Hackathon Registration!" << endl;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18) 
    {
        cout << "Sorry " << name << ", you must be 18 or older." << endl;
    } 
    else 
    {
        cout << "Welcome to the Hackathon, " << name <<"!" << endl;
    }
    return 0;
}