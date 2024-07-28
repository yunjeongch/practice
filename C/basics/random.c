#include <stdio.h>

#include <stdlib.h>     // srand, rand
#include <time.h>       // time

/*
* srand
    : random seed setting
* rand
    : generate random integer
* time
    : return current time in integer
*/

int main(){
    srand(time(NULL));  // set seed with current time

    int i = 0;
    while (i != 3){
        i = rand() % 5;
        printf("%d\n", i);
    }

    return 0;
}