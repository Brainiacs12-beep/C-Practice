#include <stdio.h>

int main(){

    int i = 10; // declare and initialize i with 10
    int j = i;
    int a = 2, b = 4, c = 5, d = 6;
    //%d is called format specifier
    //%d is int , % f is float and %c is char
    printf("The value of i is %d and value of j is %d\n", i, j);
    printf("The value of a is %d,\n b is %d,\n c is %d,\n and d is %d", a, b, c, d);

    return 0;
}