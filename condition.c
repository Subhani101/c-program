#include <stdio.h>

int main() {
    int user_id;
    int password;
    printf("Enter the user id and password for login : \n ");
    scanf("%d\n",&user_id);
    scanf("%d",&password);
    if (user_id !=1234567890 && password!=112624)
    {
        printf("please enter the correct user id and password user not found \n");

    }
    else if ( user_id==112244 && password== 0000 )
    {
        printf("password and user name or correct \n ");
    }
    else 
    {
        printf("time out ");
    }

    user_id==1234?printf("correct ") : printf("not correct : ");

    
    return 0;
}