#include <iostream>
#include <queue>
#include <string>
using namespace std;

// Struct to store person data
struct Person
{
    string name;
    int position;
};

int main()
{
    queue<Person> line;
    string name;

    // Add at least 5 people
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter name for person " << i << ": ";
        cin >> name;

        Person p;
        p.name = name;
        p.position = i;

        line.push(p);
    }

    cout << "\n--- Processing Queue ---\n";

    // Teller processes queue
    while (!line.empty())
    {
        Person current = line.front();

        cout << "Hello " << current.name
             << ", you are number "
             << current.position << " in line.\n";

        line.pop();
    }

    // Closing message
    cout << "We are now closed, thanks for coming!" << endl;

    return 0;
}
