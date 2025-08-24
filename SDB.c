#include <stdio.h>
#include <stdlib.h>
#include "STD.h"
#include "SDB.h"
#include "singleLinkedList.h"

bool SDB_isFull(Node* start){
    int count_student = 0;
    Node* ptr = start;
    while(ptr != NULL){
        count_student++;
        ptr = ptr->link;
    }
    if(count_student < 10){
        return false;
    }
    return true;
}

uint8 SDB_GetUsedSize(Node* start){
    int count_student = 0;
    Node* ptr = start;
    while(ptr != NULL){
        count_student++;
        ptr = ptr->link;
    }
    return count_student;
}

bool SDB_AddEntry(Node* start){
    Node* New = NULL;
    student data;
    printf("Please Enter Student Data: \n");
    printf("Student ID: ");
    scanf("%d",&data.Student_ID);
    printf("Student Year: ");
    scanf("%d",&data.Student_year);
    printf("Course 1 ID: ");
    scanf("%d",&data.Course1_ID);
    printf("Course 1 Grade: ");
    scanf("%d",&data.Course1_grade);
    printf("Course 2 ID: ");
    scanf("%d",&data.Course2_ID);
    printf("Course 2 Grade: ");
    scanf("%d",&data.Course2_grade);
    printf("Course 3 ID: ");
    scanf("%d",&data.Course3_ID);
    printf("Course 3 Grade: ");
    scanf("%d",&data.Course3_grade);
    insertNodeAtEnd(New,&data);
    printf("\n\n");
}

void SDB_DeletEntry(uint32 id){

}

bool SDB_ReadEntry(Node* start,uint32 id){
    Node* ptr = start;
    if(ptr != NULL){
        while (ptr != NULL){
            if(ptr->info.Student_ID == id){
                printf("Student Data\n\n");
                printf("Student ID: %d\n",ptr->info.Student_ID);
                printf("Student Year: %d\n",ptr->info.Student_year);
                printf("Course 1 ID: %d\n",ptr->info.Course1_ID);
                printf("Course 1 Grade: %d\n",ptr->info.Course1_grade);
                printf("Course 2 ID: %d\n",ptr->info.Course2_ID);
                printf("Course 2 Grade: %d\n",ptr->info.Course2_grade);
                printf("Course 3 ID: %d\n",ptr->info.Course3_ID);
                printf("Course 3 Grade: %d\n",ptr->info.Course3_grade);
                return 1;
            }
            ptr = ptr->link;
        }
        printf("This ID Not Existing\n");
        return 0;
    }
}

void SDB_GetList(uint8* count,uint32 list){

}

bool SDB_IsIdExist(Node* start,uint32 id){
    Node* ptr = start;
    if(ptr != NULL){
        while(ptr != NULL){
            if(ptr->info.Student_ID == id){
                return 1;
            }
            ptr = ptr->link;
        }
        printf("This Id Not Existed");
        return 0;
    }
    return 0;
}
