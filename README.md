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
