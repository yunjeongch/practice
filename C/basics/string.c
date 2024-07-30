#include <stdio.h>
#include <stdlib.h>

int main(){

    // string
    /*
        use string with char pointer (char *)
        always NULL character(\0) is appended at the end !!
        cannot reassign the character since it it a literal. (compile error)
    */
    char *s1 = "Hello";

    printf("%s, size of the pointer: %d\n", s1, sizeof(s1));    // printf - no dereffering!

    // as array
    char s[10] = "Hello";   // you have to initialize when defining

    s[1] = '1';

    printf("%c\n", *(s+1));


    // user input

    char *s2 = malloc(sizeof(char) * 10);;

    scanf("%s", s2);        // char pointer or char array
    // scanf("%[^\n]s", s1);    // get input containing blank


    printf("%s\n", s2);     // only previously not assigned variable; you cannot reassign

    free(s2);

    char s3[10];

    scanf("%s", s3);
    printf("%s\n", s3);

    return 0;
}