#include <stdio.h>
#include <stdlib.h> // malloc, free
#include <string.h> // memset

int main(){

    int *numptr;
    int num1 = 10;

    numptr = &num1;


    // address operator &
    // get the address of the variable
    printf("%p\n", &num1);
    printf("%p\n", numptr);

    printf("size of the pointer: %d\n", sizeof(numptr));  // 4 byte for 32 bit sys, 8 byte for 64 bit sys.

    // dereference operator *
    // go to the address saved in the pointer and get the value

    printf("%d\n", *numptr);

    *numptr = 20;
    printf("%d\n", num1);

    // const pointer
    const int num2 = 10;    
    const int *numptr2 = &num2;     // referring constant variable

    // *numptr2 = 20;       // cannot modify constant (compile error)
    printf("%d\n", *numptr2);

    int * const numptr3 = &num1;    // the pointer is const, referring variable is not const

    *numptr3 = 30;
    printf("%d\n", num1);


    // void pointer
    /*
        implicit type casting occured when certain type pointer is assigned
        any type ptr can be assigned
        no dereferring !! (compile error) due to null information of how long to read
    */
    void * ptr;

    char c1 = 'a';

    ptr = &num1;
    ptr = &c1;                  // any type variable can be referred (implicit type casting)
    // print("%c\n", *ptr);     // compile error! no dereferring


    // double pointer
    /*
        pointer to assign pointer's address
        type ** name;
    */
    int **numptr4;
    numptr = &num1;
    numptr4 = &numptr;

    printf("%d\n", **numptr4);  // double dereferring


    // dynamic memory allocation
    /*
        ptr = malloc(size)
        returns memory address if success, else returns NULL
        should include <stdlib.h> !!

        free(ptr)

        * dynamic allocation - use memory in heap
        * static allocation - use memory in stack
    */
    int *numptr5 = malloc(sizeof(int));
    printf("%p\n", numptr5);

    if (numptr5){
        *numptr5 = 50;
        printf("%d\n", *numptr5);
        free(numptr5);  // must explictly free the memory
    }

    /*
        memset : set the memory values with expected amount
        mset(ptr, value, size)
        returns the set ptr
        should incllude <string.h> !!
    */
    long long *numptr6 = malloc(sizeof(long long));
    memset(numptr6, 0x27, 8); // set the 8 bytes of the memory pointed by numptr6 0x27

    printf("%llx\n", *numptr6);
    free(numptr6);


    // NULL pointer
    //  pointing nothing; use it for checking condition
    int *nullptr = NULL;
    
    

    return 0;
}