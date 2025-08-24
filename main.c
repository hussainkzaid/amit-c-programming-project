#include <stdio.h>
#include <stdlib.h>
#include "STD.h"
#include "SDB.h"
#include "singleLinkedList.h"

int main()
{
    Node* List = NULL;
    List = createList(DATABASE_MIN_STUDENT);
    displayList(List);
    return 0;
}
