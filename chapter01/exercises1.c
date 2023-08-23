
#include <stdio.h>

int searching_nonexistent();
int insertion_first_position();
int insertion_last_position();
int deletion_first_position();
int deletion_last_position();

int main()
{
    searching_nonexistent();
    insertion_first_position();
    insertion_last_position();
    deletion_first_position();
    deletion_last_position();
}

int searching_nonexistent()
{
    const int INIT_SIZE = 100; 
    int myArray[INIT_SIZE];
    int notExists = 101;

    // Initialize the array with values from 1 to 100
    for (int i = 0; i <= INIT_SIZE; i++)
    {
        myArray[i] = i;
    }
    int steps = 0;
    for (int i = 0; i < INIT_SIZE; i++)
    {
        if (myArray[i] == notExists)
        {
            printf("found [%d] = %d\n", i, myArray[i]);
            break;
        }
        steps = steps + 1;
    }

    // Print the values of the array
    for (int i = 0; i < INIT_SIZE + 1; i++) {
        printf("\t myArray[%d] = %d", i, myArray[i]);
    }

    printf("\n 1.- steps required to search a value not contained [%d] \n", steps);
    
    return 0;
}

int insertion_first_position()
{
    const int INIT_SIZE = 100; 
    const int FINAL_SIZE = 101;
    int myArray[INIT_SIZE];
    int insert = -1;

    // Initialize the array with values from 1 to 100
    for (int i = 0; i <= INIT_SIZE; i++)
    {
        myArray[i] = i;
    }
    int lengthOriginal = sizeof(myArray) / sizeof(myArray[0]);

    int newArray[FINAL_SIZE];
    int steps = 0;
    
    // insert at the begining
    newArray[0] = insert; // element at the begining
    steps = steps + 1;
    for (int i = 0; i < INIT_SIZE; i++)
    {
        newArray[i + 1] = myArray[i];
        steps = steps + 1;
    }

    // Print the values of the array
    for (int i = 0; i < FINAL_SIZE; i++) {
        printf("\t newArray[%d] = %d", i, newArray[i]);
    }

    printf("\n 2.- steps required to insert an element at the begining [%d] \n", steps);
    
    return 0;
}

int insertion_last_position()
{
    const int INIT_SIZE = 100; 
    const int FINAL_SIZE = 101; 
    int myArray[INIT_SIZE];
    int insert = 101;

    // Initialize the array with values from 1 to 100
    for (int i = 0; i <= INIT_SIZE; i++)
    {
        myArray[i] = i;
    }
    int steps = 0;     
    // insert at the end
    myArray[FINAL_SIZE - 1] = insert; // element at the end
    steps = steps + 1;

    // Print the values of the array
    for (int i = 0; i < FINAL_SIZE; i++) {
        printf("\t myArray[%d] = %d", i, myArray[i]);
    }

    printf("\n 3.- steps required to insert an element at the end [%d] \n", steps);
    
    return 0;
}

int deletion_first_position()
{
    const int INIT_SIZE = 100; 
    const int FINAL_SIZE = 99;
    int myArray[INIT_SIZE];

    // Initialize the array with values from 1 to 100
    for (int i = 0; i <= INIT_SIZE; i++)
    {
        myArray[i] = i;
    }

    int lengthOriginal = sizeof(myArray) / sizeof(myArray[0]);
    int steps = 0;
    for (int i = 0; i < FINAL_SIZE; i++)
    {
        myArray[i] = myArray[i + 1];
        steps = steps + 1;
    }

    // Print the values of the array
    for (int i = 0; i < FINAL_SIZE; i++) {
        printf("\t myArray[%d] = %d", i, myArray[i]);
    }

    printf("\n 4.- steps required to delete an element at the begining [%d] \n", steps);

    return 0;
}

int deletion_last_position()
{
    const int INIT_SIZE = 100; 
    const int FINAL_SIZE = 99;
    int myArray[INIT_SIZE];

    // Initialize the array with values from 1 to 100
    for (int i = 0; i <= INIT_SIZE; i++)
    {
        myArray[i] = i;
    }

    myArray[FINAL_SIZE - 1] = NULL; // delete last
    int steps = 1;
    
    // Print the values of the array
    for (int i = 0; i < FINAL_SIZE; i++) {
        printf("\t myArray[%d] = %d", i, myArray[i]);
    }

    printf("\n 5.- steps required to delete an element at the end [%d] \n", steps);
    
    return 0;
}