// calculate area of circle
#include <stdio.h>

int main(){
    float radius, height, area;
    printf("Enter the radius of circle :\t");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder:\t");
    scanf("%f", &height);
    area = 3.14 * radius * radius;
    float volume = 3.14 * radius * radius * height;
    printf("The area of circle is :\t%.2f", area);
    // scanf("%f", &area); //%.2f used for the round off upto 2 digit (this scanf won't work as it take value input from the  user so directly calculation not possible hence use printf())
    printf("\nThe volume of cylinder is :\t%.2f", volume);
    return 0;
}

//#include <stdio.h>

//int main(){
    //int r = 6;
    //printf("area of circle is %d with %f", 3.14 * r * r, r);

    //return 0;
//}