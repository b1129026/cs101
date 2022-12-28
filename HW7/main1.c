/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n = 7;
   
    for (int i=1;i<=n;i++) {
        for(int p=0;p<n-(i-1)+(2*i-1);p++) {
            if (p<n-i+1) {
                printf(" ");
            }
            else {
                if ((p-(n-i+1))%2 == 0) {
                    printf("%d", i);
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }       
    return 0;
    

}

