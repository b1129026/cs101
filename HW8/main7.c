/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int get_sum(int n);
int get_sum1(int n); // for positive n
int get_sum2(int n); // for negative n
int print_result(int value, char* name);

int main() {
    int a = -999;
    int b = 999;
    print_result(a, "a");
    print_result(b, "b");
    return 0;
}



int get_sum(int n) {
    if (n > 0) {
        return get_sum1(n);
    } else if (n == 0) {
        return 0;
    } else {
        return get_sum2(n);
    }
}

int get_sum1(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + get_sum1(n / 10);
    }
}

int get_sum2(int n) {
    if (n / 10 == 0) {
        return (n % 10);
    } else {
        return -(n % 10) + get_sum2(n / 10);
    }
}

int print_result(int value, char* name) {
    int sum = get_sum(value);
    printf("%s = %d, sum of all digits = %d\n", name, value, sum);
    return sum;
}