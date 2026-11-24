// write program for area of rectangle
#include <stdio.h>

int main(){
    int length, breadth, area;
    printf("\nEnter the length of rectangle :\t");
    scanf("%d", &length);
    printf("\nEnter the breadth of rectangle:\t");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("The area of rectangle is:\t%d", area);  

    return 0;
}
