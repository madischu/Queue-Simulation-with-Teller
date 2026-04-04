#include <iostream>
#include "QueueFunctions.h"
using namespace std;

// Function to add people to the queue
void addPeople(queue<Person>& line, int totalPeople)
{
    string personName;

    for (int i = 1; i <= totalPeople; i++)
    {
        Person newPerson;

        cout << "Enter the name of person " << i << ": ";
        cin >> newPerson.name;

        newPerson.numberInLine = i;
        line.push(newPerson);

        cout << newPerson.name << " was added as number "
             << newPerson.numberInLine << " in line." << endl;
    }
}

// Function to serve people in the queue
void servePeople(queue<Person>& line)
{
    cout << "\nNow serving customers:\n" << endl;

    while (!line.empty())
    {
        Person currentPerson = line.front();

        cout << "Hello " << currentPerson.name
             << ", you are number "
             << currentPerson.numberInLine
             << " in line." << endl;

        line.pop();
    }

    cout << "\nWe are now closed, thanks for coming!" << endl;
}
