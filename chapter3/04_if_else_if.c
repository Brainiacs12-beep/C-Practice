#include <stdio.h>

int main(){

    int age = 65;
    if(age>60){
        printf("ur age is greater than 60");
    }
    //if above condition is true then it will not check the below condition because it is already true and it will not check the below else if condition
    else if(age>18){
        printf("ur age is greater than 18");
    }
    else{
        printf("ur age is less than 18");
    }
    return 0;
}