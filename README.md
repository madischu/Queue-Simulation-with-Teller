# Queue-Simulation-with-Teller

## Program Description
This C++ program creates a queue of people standing in line. Each person is stored in a `struct` with these fields:
- `name`
- `numberInLine`

The program asks the user to enter at least 5 people, places them into a queue in the order entered, and then simulates a teller serving each peroson one at a time. 

For each person, the teller prints a greeting that includes the person's name and their number in line. After all people have been served and the queue is empty, the program prints:

`We are now closed, thanks for coming!`

## Inputs
The user enters:
- The number of people to add to the queue, with a minimum of 5
- Each person's name

## Outputs
- Confirmation that each person was added to the queue
- Teller greetings for each person in order
- A closing message after the queue is empty

## Compile and Run Instructions
**Using g++**

Compile:

g++ main.cpp QueueFunctions.cpp -o queueProgram

Run:

./queueProgram

## Design Documentation
** Detailed Psuedocode

Start program

Create an empty queue of Person structs

Ask user how many people will be in line
While the number is less than 5
    ask again

For each person from 1 to total number of people
    ask user for the person's name
    create a Person struct
    store the name
    store the person's position number
    push the Person into the queue

Print a heading for teller output

While the queue is not empty
    get the person at the front of the queue
    print "Hello [name], you are number [numberInLine] in line."
    remove that person from the queue

When the queue is empty
    print "We are now closed, thanks for coming!"

End program

## UML Class Diagram
<img width="347" height="211" alt="image" src="https://github.com/user-attachments/assets/7dcb141d-3e48-4d7b-b5ca-371ed5252737" />

<img width="464" height="213" alt="image" src="https://github.com/user-attachments/assets/7f31264f-d08b-4ef9-94c8-f72f03e4ba33" />

## Use Case Diagram
<img width="442" height="906" alt="image" src="https://github.com/user-attachments/assets/1960b797-b22d-4976-a717-2fd538286a76" />

## Program Execution Evidence
<img width="424" height="424" alt="image" src="https://github.com/user-attachments/assets/ca1363ea-0f96-470a-ba82-1f58b9bd19da" />

