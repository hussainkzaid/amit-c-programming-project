#ifndef SDB_H
#define SDB_H
#include "STD.h"
#define DATABASE_MAX_STUDENT 10
#define DATABASE_MIN_STUDENT 3
typedef struct SimpleDb
{
    uint32 Student_ID;
    uint32 Student_year;
    uint32 Course1_ID;
    uint32 Course1_grade;
    uint32 Course2_ID;
    uint32 Course2_grade;
    uint32 Course3_ID;
    uint32 Course3_grade;
}student;


#endif
