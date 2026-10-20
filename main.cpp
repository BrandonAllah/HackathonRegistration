
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variables
    int age;
    string name;
    char again = 'y';

    // Registration counters
    int accepted = 0;
    int rejected = 0;

    // Registration loop
    while (again == 'y')
    {
        cout << "My First C++ Project!" << endl;
        cout << "Welcome to the Hackathon Registration!" << endl;

        // Get participant's name
        cout << "Enter your name: ";
        getline(cin, name);

        // Get participant's age
        cout << "Enter your age: ";

        // Check for invalid age input
        while (!(cin >> age) || age < 0)
        {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Invalid age! Try again: ";
        }

        // Check age eligibility
        if (age < 18)
        {
            cout << "Sorry " << name << ", you must be 18 or older." << endl;
            rejected++;
        }
        else
        {
            cout << "Welcome to the Hackathon, " << name << "!" << endl;
            accepted++;
        }

        // Ask to register another participant
        cout << "Would you like to register another person? (y/n): ";
        cin >> again;
        cin.ignore(1000, '\n');
    }

    // Display final results
    cout << "\nRegistration Complete!" << endl;
    cout << "Accepted: " << accepted << endl;
    cout << "Rejected: " << rejected << endl;

    return 0;
}
