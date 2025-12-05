#include <stdio.h>

int main() {
    char days;// 1.monday,2.tuesday etc://
    printf("Enter a day in chat example m=monday, t= tuesday w = .wednesday th=thursday \n ");
        scanf("%s",&days);
       switch (days) 
       {
        case 'm' :printf("monday \n ");
                 break;
        case 't' :printf("Tuesday \n ");
                break;
        case 'w' :printf("Wednesday \n ");
        break;
        case 'T' :printf("Thuresday \n ");
        break;

        case 'f':printf("Friday  \n ");  
        break;

        case 's':printf("Saturday \n ");
        break;
        case'S' :printf("Sunday \n ");
        break;
        default : printf("not enter the option value");
       }
    return 0;
}