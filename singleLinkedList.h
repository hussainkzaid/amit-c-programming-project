#ifndef LIST_H
#define LIST_H
#include "STD.h"
#include "SDB.h"

typedef struct linkedList{
    student info;
    struct linkedList* link;
}Node;

Node* createList(int numberOfNodes);
Node* insertNodeInBegining(Node* start,student* data);
void  insertNodeAtEnd(Node* start,student* data);
void displayList(Node* start);

#endif
