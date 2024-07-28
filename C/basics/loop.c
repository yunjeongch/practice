#include <stdio.h>

int main()
{

    // for(initial; cond; change) - each can be omitted
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");


    // while
    int i = 0;                      // initial
    while (i < 10)                  // condition
    {                
        printf("%d ", i);
        i++;                        // change code here
    }
    printf("\n");

    // do-while
    // repeat at least once
    i = 0;
    do
    {
        printf("%d ", i);
        i++;                        // change code here
    } while (i < 10);               // semicolon here!!
    printf("\n");

    // example
    /*
    input : height of the triangle
    output : triangle with *

    ex)
        input : 3
        output :  *
                 ***
                *****
    */

    int height;
    scanf("%d", &height);

    for (i = 0; i < height; i++){
        for (int j = 0; j < 2*height-1; j++){
            char c = (j >= height-i-1) && (j <= height+i-1) ? '*' : ' ';
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}