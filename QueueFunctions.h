#ifndef QUEUEFUNCTIONS_H
#define QUEUEFUNCTIONS_H

#include <queue>
#include "Person.h"
using namespace std;

// Adds people to the queue
void addPeople(queue<Person>& line, int totalPeople);

// Serves people from the queue
void servePeople(queue<Person>& line);

#endif
