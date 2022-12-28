/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    long long pi = 0ll;
    long long er =100000000000ll;
    int i = 1;
    for (i = 1;i<200000;i++) {
        pi += (((i+1)%2)*(-2)+1)*40000000000000000/(2*i-1);
        if (pi/er == 314159) {
            break;
        }
    }
    //printf("%d, %lld, %lld\n", i, pi, pi/er);
    printf("x = %d\n",  (((i+1)%2)*(-2)+1)*(2*i-1));
    return 0;
}