/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void print_spaces(int r, int rows) {
    for(int space = rows;  space>rows-r;space--) {
        printf("  ");
    
    }
    
}
void print_stars(int r, int rows) {
    for (int star = 0; rows-r>star;star++) {
        printf(" * ");
    }
}   
    

int main() {
    int rows = 5;
    for (int r = 0; r<rows; r++) {
        print_spaces(r,rows);
        print_stars(r,rows);
        printf("\n");
    }
    
    return 0; 
}
    
    
//void print_stars(int i, int r) {
    //for (int i = 0, r = 0; r<row; r++);
    //printf("* ");


    

