/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int get_digit(int n) {
    int value = 0, nn = n;
    while (nn > 0) {
        value *= 10;
        value += nn % 10;
        nn /= 10;
    }
    return value;
}
int main() {
    int sum = 0;
    sum = get_digit(1234);
    printf("%d",sum);
    return 0;
    
}