/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

get_one(int i) {
    int y = 0;
    if (i&(i-1)) {
        for (int x = 1;i&(i-1);i = i&(i-1),x++) {
            y = x + 1;
        }
        printf("%d",y);
    }
    else {
        printf("%d",1);
    }
    printf("\n");
    return 0;
}
int main() {
    get_one(15);
    get_one(1);
    get_one(129);
    return 0;
}
