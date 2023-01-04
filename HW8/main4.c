/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int round_func(float f) {
    if (((int)(f*10))%10 <5) {
        printf("%f -> %d",f,((int)f));
    }
    else {
        printf("%f -> %d",f,((int)f)+1);
    }
    printf("\n");
}
int main() {
    round_func(1.4);
    round_func(2.6);
    round_func(2.34);
    round_func(9.2344567789);
    return 0;
}