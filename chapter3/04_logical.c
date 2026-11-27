#include <stdio.h>

int main(){

    int a = 2;
    int b = 3;
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a or b is %d\n", a || b);
    printf("The value of a is not equal to b is %d\n", a != b);

    return 0;
}

// // if (a && b) is true if both a and b are non-zero (true). If either a or b is zero (false), the result is false.
// is same as writing
// if(a){
//     if(b){
//         printf("both are true");
//     }
// }