#include <stdio.h>

int main() {
    //Finding the Average of 3 numbers
   float  a,b,c;
    printf("Enter the number of values for\n");     
    scanf("%f\n",&a);
    scanf("%f\n",&b);
    scanf("%f",&c);
    printf("The average of 3 number equals to %f: ",(a+b+c)/3);
        return 0;
}