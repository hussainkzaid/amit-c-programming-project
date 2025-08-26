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
    printf("3. To read student data, enter 3 \n");
    printf("4. To get the list of all student IDs, enter 4 \n");
    printf("5. To check is ID is existed, enter 5 \n");
    printf("6. To delete student data, enter 6 \n");
    printf("7. To check is database is full, enter 7 \n");
    printf("8. To exit enter 0 \n");
    printf("Select What You Want : ");
    scanf("%d",&choice);
    printf("\n\n");
    SDB_action(choice);
    return;
}

void SDB_action(uint8 choice){
    uint32 id;
    uint8 count = SDB_GetUsedSize();
    uint32 list[DATABASE_MAX_STUDENT];
    switch (choice)
    {
        case 1:
            if(SDB_AddEntry()){
                printf("Student Data Added Successfully\n\n");
            }
            break;

        case 2:
            printf("%d/10 Used\n\n",SDB_GetUsedSize());
            break;

        case 3:
            printf("Enter The ID: ");
            scanf("%d",&id);
            if(!SDB_ReadEntry(id)){
                printf("This ID Not Exist\n\n");
            }
            break;

        case 4:
            SDB_GetList(&count,&list[0]);
            break;

        case 5:
            printf("Enter The ID: ");
            scanf("%d",&id);
            if(SDB_IsIdExist(id)){
                printf("ID Is Existed\n\n");
            }
            else{
                printf("ID Not Existed\n\n");
            }
            break;

        case 6:
            printf("Enter The ID: ");
            scanf("%d",&id);
            SDB_DeletEntry(id);
            break;

        case 7:
            if(SDB_isFull()){
                printf("Database Is Full\n\n");
            }
            else{
                printf("Database Is Not Full\n\n");
            }
            break;

        case 0:
            printf("Have A Good Day <3\n");
            return;

        default:
            printf("Invalid Input..Please Try Again\n\n");
            SDB_APP();
    }

    SDB_APP();

 }


