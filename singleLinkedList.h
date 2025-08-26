#ifndef LIST_H
#define LIST_H
#include "STD.h"
#include "SDB.h"

typedef struct linkedList{
    student info;
    struct linkedList* link;
}Node;

extern Node* List;

Node* createList(int numberOfNodes,student* database);
Node* insertNodeInBegining(student* data);
bool  insertNodeAtEnd(student* data);
void displayList();

#endif
