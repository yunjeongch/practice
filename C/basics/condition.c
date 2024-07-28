#include <stdio.h>

int main(){

    int num = 1;

    // if-elseif-else : true/false
    if (num < 1)
        printf("%d < 1\n", num);
    else if (num == 1)
        printf("%d == 1\n", num);
    else
        printf("%d > 1\n", num);

    // switch-case-default : conditions
    // only int/char // no float/double/string
    switch (num){

        case 1:
            printf("%d\n", num);
            break;              // break; is mandatory!!
        case 2:
            printf("%d\n", num);
            break;
        default:
            printf("%d\n", num);
    }


    return 0;
}