#include <stdio.h>
#include <stdlib.h>
#include "STD.h"
#include "SDB.h"
#include "singleLinkedList.h"

bool SDB_isFull(){
    int count_student = 0;
    Node* ptr = List;
    while(ptr != NULL){
        count_student++;
        ptr = ptr->link;
    }
    if(count_student < DATABASE_MAX_STUDENT){
        return false;
    }
    return true;
}

uint8 SDB_GetUsedSize(){
    uint8 count_student = 0;
    Node* ptr = List;
    while(ptr != NULL){
        count_student++;
        ptr = ptr->link;
    }
    return count_student;
}

bool SDB_AddEntry() {
    student data;

    printf("Please Enter Student Data:\n");

    printf("Student ID: ");
    if (scanf("%d", &data.Student_ID) != 1) return false;

    printf("Student Year: ");
    if (scanf("%d", &data.Student_year) != 1) return false;

    printf("Course 1 ID: ");
    if (scanf("%d", &data.Course1_ID) != 1) return false;

    printf("Course 1 Grade: ");
    if (scanf("%d", &data.Course1_grade) != 1) return false;

    printf("Course 2 ID: ");
    if (scanf("%d", &data.Course2_ID) != 1) return false;

    printf("Course 2 Grade: ");
    if (scanf("%d", &data.Course2_grade) != 1) return false;

    printf("Course 3 ID: ");
    if (scanf("%d", &data.Course3_ID) != 1) return false;

    printf("Course 3 Grade: ");
    if (scanf("%d", &data.Course3_grade) != 1) return false;

    printf("\n");

    if (insertNodeAtEnd(&data)) {
        return true;
    } else {
        return false;
    }
}


void SDB_DeletEntry(uint32 id){

}

bool SDB_ReadEntry(uint32 id){
    Node* ptr = List;
    if(ptr != NULL){
        while (ptr != NULL){
            if(ptr->info.Student_ID == id){
                printf("\n\nStudent Data\n\n");
                printf("Student ID: %d\n",ptr->info.Student_ID);
                printf("Student Year: %d\n",ptr->info.Student_year);
                printf("Course 1 ID: %d\n",ptr->info.Course1_ID);
                printf("Course 1 Grade: %d\n",ptr->info.Course1_grade);
                printf("Course 2 ID: %d\n",ptr->info.Course2_ID);
                printf("Course 2 Grade: %d\n",ptr->info.Course2_grade);
                printf("Course 3 ID: %d\n",ptr->info.Course3_ID);
                printf("Course 3 Grade: %d\n",ptr->info.Course3_grade);
                return true;
            }
            ptr = ptr->link;
        }
        return false;
    }
    return false;
}

void SDB_GetList(uint8* count,uint32* list){
    printf("Total Students ID: %d\n\n",*count);
    Node* ptr = List;
    for(uint8 i=0;i<*count;i++){
        list[i]=ptr->info.Student_ID;
        printf("Student %d ID: %d\n",i+1,list[i]);
        ptr = ptr->link;
    }
    printf("\n\n");
}

bool SDB_IsIdExist(uint32 id){
    Node* ptr = List;
    if(ptr != NULL){
        while(ptr != NULL){
            if(ptr->info.Student_ID == id){
                return true;
            }
            ptr = ptr->link;
        }
        printf("This Id Not Existed");
        return false;
    }
    return false;
}
