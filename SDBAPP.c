#include <stdio.h>
#include <stdlib.h>
#include "STD.h"
#include "SDB.h"
#include "singleLinkedList.h"

void SDB_APP(){
    uint8 choice;
    printf("options: \n\n");
    printf("1. To add entry, enter 1 \n");
    printf("2. To get used size in database, enter 2 \n");
    printf("3. To read student data, enter 3");
    printf("4. To get the list of all student IDs, enter 4 \n");
    printf("5.  To check is ID is existed, enter 5 \n");
    printf("6. To delete student data, enter 6 \n");
    printf("7. To check is database is full, enter 7 \n");
    printf("8. To exit enter 0 \n");
    printf("Select What You Want : ");
    scanf("%d",choice);
    SDB_action(choice);
}

void SDB_action(uint8 choice){

}
