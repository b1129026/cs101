/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
print_roofspc(int i) {
    for(int spc = i;spc>1;spc--) {
        printf(" ");
    }
}
print_roof(int i) {
    for(int roof = 0;roof<2*i+1;roof++) {
        printf("*");
    }
    printf("\n");
}
print_house(int i) {
    for(int h = 0;h<2*i-2;h++) {
        if (h == 0) {
            printf("*");
        }
        if(h ==(2*i-3)) {
            printf("*");
        }
        else {
            printf(" ");
        }
    }
    printf("\n");
}
print_space(int i) {
    for(int space = 0;space<2*i-1;space++) {
        printf("*");
    }
}
int main()
{
    int n = 4;
    for(int i = 0,j = n;i<n;i++,j--) {
        print_roofspc(j);
        print_roof(i);
    }
    for(int i = 0;i<n;i++) {
        print_house(n);
    }
    print_space(n);
    
    
    return 0;
}