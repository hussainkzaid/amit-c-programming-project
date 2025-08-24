#include <stdio.h>
#include <stdlib.h>
#include "STD.h"
#include "SDB.h"
#include "singleLinkedList.h"

Node* createList(int numberOfNodes){
    Node* startNew = NULL;
    student data;
    printf("Please Enter Student Number 1 Data: \n");
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
    startNew = insertNodeInBegining(startNew,&data);
    printf("\n\n");

    for(int i=1;i<numberOfNodes;i++){
        printf("Please Enter Student Number %d Data: \n",i+1);
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
        insertNodeAtEnd(startNew,&data);
        printf("\n\n");
    }
    return startNew;
}
Node* insertNodeInBegining(Node* start,student* data){
    Node* temp = (Node*)malloc(sizeof(Node));
    if(temp != NULL){
        temp->info = *(data);

        temp->link = start;
        start = temp;
    }
    return start;
}

void  insertNodeAtEnd(Node* start,student* data){
    Node* temp = (Node*)malloc(sizeof(Node));
    if(temp != NULL){
        temp->info = *(data);

        Node* ptr = start;
        while(ptr->link != NULL){
            ptr = ptr->link;
        }
        ptr->link = temp;
        temp->link = NULL;
    }
}
void displayList(Node* start){
    if(start != NULL){
        Node* ptr = start;
        printf("List Elements Are: \n\n");
        int count_student = 1;
        while(ptr != NULL){
            printf("Student %d Data\n\n",count_student);
            printf("Student ID: %d\n",ptr->info.Student_ID);
            printf("Student Year: %d\n",ptr->info.Student_year);
            printf("Course 1 ID: %d\n",ptr->info.Course1_ID);
            printf("Course 1 Grade: %d\n",ptr->info.Course1_grade);
            printf("Course 2 ID: %d\n",ptr->info.Course2_ID);
            printf("Course 2 Grade: %d\n",ptr->info.Course2_grade);
            printf("Course 3 ID: %d\n",ptr->info.Course3_ID);
            printf("Course 3 Grade: %d\n",ptr->info.Course3_grade);
            printf("\n\n\n");
            ptr = ptr->link;
            count_student++;
        }
        printf("\n");
    }
    else{
        printf("Empty List\n");
    }
}

