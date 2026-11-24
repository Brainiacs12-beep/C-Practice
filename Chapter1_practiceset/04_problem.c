//calculating simple interest
#include <stdio.h>

int main(){
    float p, r, t, si;
    printf("\nEnter the value of principal amount:\t");
    scanf("%f", &p);
    printf("\nEnter the value of rate of interest:\t");
    scanf("%f", &r);
    printf("\nEnter the value of time:\t");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("\nThe simple interest is :\t%.2f", si);

    return 0;
}