
// number divisible by 97

#include <stdio.h>

int main(){

    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a % 97 == 0){
        printf("The value of a is divisible by 97");
    }
    else{
        printf("The value of a is not divisible by 97");
    }
    return 0;
}
// without loop
// int a = 23456;
// printf("the value os a%97 is %d",a%97);
// return 0;