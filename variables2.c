git#include <stdio.h>
#include <math.h>
//even - 1 
//odd - 0 
int main() {
    int x;
    printf("Enter a number \n ");
    scanf("%d",&x);
    printf("%d",x % 2 == 0);
    return 0;
}