#include <stdio.h>
// celsius to fahrenheit conversion 
int main(){

    int c, f;
    c = 37;
    f = (c * 9/5) + 32;
    printf("The temperature in Fahrenheit is :\t%d", f);
    return 0;
}