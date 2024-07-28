#include <stdio.h>
#include <stdlib.h>

int main()
{

    // array
    /*
        type name[size] = {value1, value2, ... }    // { ... } can be used only in initialization
            if using { ... } the explicit size can be omitted
        type name[size];

    */
    int numArr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d\n", sizeof(numArr));               //  40; sizeof(type)*num elements
    printf("%d\n", sizeof(numArr) / sizeof(int)); // 10; num elements

    // referring array with pointer
    /*
        array can be used as a pointer
    */
    int *ptr = numArr;                      // allocate the address of numArr[0]
    printf("%d, %d\n", ptr[5], *(ptr + 5)); // indexing is dereferring! no dereferring operation *

    // dynamic allocation of array
    /*
        the size of an array must be a fixed value
        you can use dynamic allocated pointer as an array
    */
    int *dyptr = malloc(10 * sizeof(int));
    dyptr[5] = 5;
    printf("%d\n", dyptr[5]);
    free(dyptr);

    // 2 dim array
    /*
        type name[size1][size2]
    */
    int arr[3][4] = {
        {11, 22, 33, 44},
        {55, 66, 77, 88},
        {99, 110, 121, 132}};

    int col = sizeof(arr[0])/sizeof(int);
    int row = sizeof(arr)/sizeof(arr[0]);

    printf("#col: %d, #row: %d\n", col, row);

    int (*arrptr)[col] = arr;     // each pointer points row's first value, so the shape should be num columns

    printf("%d\n", arrptr[0][3]);
    printf("%d, %d, %d\n", sizeof(arrptr), sizeof(arrptr[0]), sizeof(arrptr[0][0]));   
    // 8: arrptr has the pointer to the array of pointers (64 bit sys -> 1 pointer == 8byte)
    // 16: arrptr[0] has 4 columns each having integers
    // 4: arrptr[0][0] has 1 integer

    return 0;
}