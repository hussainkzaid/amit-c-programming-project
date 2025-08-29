#include <stdio.h>
#include <stdlib.h>
#include "STD.h"
#include "SDB.h"
#include "singleLinkedList.h"
#include "data.h"


// Main entry point
// Calls insert_data() to preload database, then starts the app loop
int main()
{
    insert_data();  // Load initial students
    SDB_APP();      // Start user interface
    return 0;
}
