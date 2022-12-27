/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i = 10;
    if (i % 3 == 0) {
        printf("Love");
    }
    if (i % 5 == 0) {
        printf("IU");
    }
    if (i % 15 == 0) {
        printf("Love IU");
    }
    else {
        printf("%d",i);
    }
    return 0;   
}