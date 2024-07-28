#include <stdio.h>
#include <stdbool.h>        // defined bool, true, false

// without header file, use _Bool to define
#define bool   _Bool
#define false  0
#define true   1

int main(){

    bool b1 = true;

    if (b1 == true){
        printf("true\n");
    }else{
        printf("false\n");
    }

    printf("size of bool: %d\n", sizeof(bool));  // 1 byte

    printf(b1 ? "true\n" : "false\n");          // 3-ary operation ? :

    
    

    return 0;
}