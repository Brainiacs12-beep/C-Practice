#include <stdio.h>
#include <math.h>

int main(){

    int a = 4;
    int b = 3;
    int c = a + b;
    printf("\nThe value of c is %d", c);
    int d = a - b;
    printf("\nThe value of d is %d", d);
    int e = a * b;
    printf("\nThe value of e is %d", e);
    float f = a / b;
    printf("\nThe value of f is %f", f);
    int g = a % b;
    printf("\nThe value of g is %d", g);
    float p = 10.00;
    float r = 2.00;
    float t = fmodf(p, r); // we can't directly apply the modulus function to float value hence we apply fmodf
    printf("\nThe value of t is %f", t);
    return 0;
}