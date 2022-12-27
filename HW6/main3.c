/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int year = 2022;
    if (year % 4 == 0 & year % 100 != 0) {
        printf("是閏年");
    }
    else if ( year % 400 == 0) {
        printf("是閏年");
    }
    else {
        printf("不是閏年");
    }
    return 0;
        
}