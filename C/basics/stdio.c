#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 (for VScode)
#include <stdio.h>

/*
std input
    scanf(format, var 주소);
    * int scanf(char const * const _Format, ...);
    * 성공하면 가져온 값의 개수를 반환, 실패하면 EOF(-1)를 반환

std output
    printf(format, var);
*/ 

int main(){

    printf("enter decimal: ");

    // num
    int num1;
    scanf("%d", &num1);
    printf("%d\n", num1);
    
    double num2;
    scanf("%lf", &num2);    // 자료형이 double일 때는 %lf
    printf("%f\n", num2);

    long double num3;
    scanf("%Lf", &num3);    // 자료형이 long double일 때는 %Lf
    printf("%Lf\n", num3);

    // char io
    char c1;
    scanf("%c", &c1);    
    printf("%c\n", c1);    

    c1 = getchar();    // get one char from stdin
    printf("%c\n", c1);

    c1 = 'a';
    putchar(c1);            // put one char to stdout
    printf("%c", '\n');
	
    

    return 0;
} 