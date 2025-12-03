#include <stdio.h>

int main() {
    int a,b;
    a=29;
    b=34;
    a-=b;
    printf("%d\n",a);
    printf("Enter the value of  a\n");  
    scanf("%d",&a);    
    printf("Enter the value of b\n");     
    scanf("%d",&b);
    a+=b;
    printf("%d",a);

    return 0;
}