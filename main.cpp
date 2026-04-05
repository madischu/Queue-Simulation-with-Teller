#include <iostream>
#include <queue>
#include "QueueFunctions.h"
using namespace std;

int main()
{
    queue<Person> line;
    int totalPeople;

    cout << "How many people are in line? (minimum 5): ";
    cin >> totalPeople;

    while (totalPeople < 5)
    {
        cout << "You must enter at least 5 people. Try again: ";
        cin >> totalPeople;
    }

    addPeople(line, totalPeople);
    servePeople(line);

    return 0;
}
