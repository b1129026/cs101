/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int print_spc(int r) {
    for(int spc = r;spc > 0;spc--) {
        printf("  ");
    }
}
int print_star(int r) {
    for(int star = 0;star < 2*r+1; star++) {
        printf("* ");
    }
    printf("\n");
}

int main()
{
    int n = 10;
    for(int i = 0, j = n;i<n;i++, j--) {
        print_spc(j);
        print_star(i);
    }

    return 0;
}
