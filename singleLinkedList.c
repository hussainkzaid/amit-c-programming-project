#include <stdio.h>
#include <stdlib.h>
#include "STD.h"
#include "SDB.h"
#include "singleLinkedList.h"

Node* createList(int numberOfNodes,student* database){
   Node* startNew = NULL;
   startNew = insertNodeInBegining(&database[0]);

    for(int i=1;i<numberOfNodes;i++){
        insertNodeAtEnd(&database[i]);
    }
    return startNew;
}
Node* insertNodeInBegining(student* data){
    Node* temp = (Node*)malloc(sizeof(Node));
    if(temp != NULL){
        temp->info = *(data);

        temp->link = List;
        List = temp;
    }
    return List;
}

bool insertNodeAtEnd(student* data){
    if(SDB_isFull()){
        printf("Failed..Database Is Full!");
        return false;
    }
    Node* temp = (Node*)malloc(sizeof(Node));
    if(temp != NULL){
        temp->info = *(data);

        Node* ptr = List;
        while(ptr->link != NULL){
            ptr = ptr->link;
        }
        ptr->link = temp;
        temp->link = NULL;
    }
    return true;
}
void displayList(){
    if(List != NULL){
        Node* ptr = List;
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

