#include <stdio.h>
#include <stdlib.h>
#include "STD.h"
#include "SDB.h"
#include "singleLinkedList.h"

void SDB_APP(){
    uint8 choice;
    printf("Options: \n\n");
    printf("To add entry, enter 1 \n");
    printf("To get used size in database, enter 2 \n");
    printf("To read student data, enter 3 \n");
    printf("To get the list of all student IDs, enter 4 \n");
    printf("To check is ID is existed, enter 5 \n");
    printf("To delete student data, enter 6 \n");
    printf("To check is database is full, enter 7 \n");
    printf("To exit, enter 0 \n");
    printf("Select What You Want : ");
    scanf("%d",(int*)&choice);
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
                printf("Student Data Added Successfully\n\n\n");
            }
            break;

        case 2:
            printf("%d/10 Used\n\n\n",SDB_GetUsedSize());
            break;

        case 3:
            printf("Enter The ID: ");
            scanf("%d",&id);
            if(!SDB_ReadEntry(id)){
                printf("This ID Does Not Exist\n\n\n");
            }
            break;

        case 4:
            SDB_GetList(&count,&list[0]);
            break;

        case 5:
            printf("Enter The ID: ");
            scanf("%d",&id);
            if(SDB_IsIdExist(id)){
                printf("ID Exists\n\n\n");
            }
            else{
                printf("ID Does Not Exist\n\n\n");
            }
            break;

        case 6:
            printf("Enter The ID: ");
            scanf("%d",&id);
            SDB_DeletEntry(id);
            break;

        case 7:
            if(SDB_isFull()){
                printf("The Database Is Full\n\n\n");
            }
            else{
                printf("The Database Is Not Full\n\n\n");
            }
            break;

        case 0:
            printf("Have A Good Day <3\n\n");
            return;

        default:
            printf("Invalid Input..Please Try Again\n\n\n");
            break;
    }

    SDB_APP();

 }


