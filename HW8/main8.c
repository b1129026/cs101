/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int print_spc(int r) {
    for(int spc = 0;spc < r; spc++) {
        printf(" ");
    }
    
}
int print_sspc(int r) {
    for(int sspc = 2*r;sspc > r+1;sspc--) {
        printf(" ");
    }
}
int print_star(int r) {
    for(int star = 2*r-1;star >0;star--) {
        printf("*");
    }
    printf("\n");
}
int print_sstar(int r) {
    for(int sstar = 0;sstar < 2*r+1; sstar++) {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int n = 4;
    for(int i = 0, j = n;i<n;i++, j--) {
        print_spc(i);
        print_star(j);
    }
    for(int i = 0, j = n;i<n;i++, j--) {
        print_sspc(j);
        print_sstar(i);
    }
    

    return 0;
}