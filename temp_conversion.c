#include <stdio.h>
#include <ctype.h>

int main(){
    
    double temp;
    char unit, unit2;
    
    printf("Is your temp in (C) or (F) or (K): ");
    scanf(" %c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
       
        printf("\nDo you want your temp in (F) or (K): ");
        scanf(" %c", &unit2);
        unit2 = toupper(unit2);
        if(unit2 == 'K'){
            printf("\nEnter your temp in (C): ");
            scanf("%lf", &temp);
            temp += 273;
            printf("The temp in K is: %.1lf", temp);

        }else if(unit2 == 'F'){
            printf("\nEnter your temp in (C): ");
            scanf("%lf", &temp);
            temp = (temp *9/5) +32 ;
            printf("The temp in K is: %.1lf", temp);
        }

    }if (unit == 'F'){
               
        printf("\nDo you want your temp in (C) or (K): ");
        scanf(" %c", &unit2);
        unit2 = toupper(unit2);
        if(unit2 == 'C'){
            printf("\nEnter your temp in (F): ");
            scanf("%lf", &temp);
            temp = (temp - 32) * 5/9;
            printf("The temp in C is: %.1lf", temp);

        }else if(unit2 == 'K'){
            printf("\nEnter your temp in (F): ");
            scanf("%lf", &temp);
            temp = (temp - 32) * 5/9 +273;
            printf("The temp in K is: %.1lf", temp);
        }

   }if (unit == 'K'){
               
        printf("\nDo you want your temp in (C) or (F): ");
        scanf(" %c", &unit2);
        unit2 = toupper(unit2);
        if(unit2 == 'C'){
            printf("\nEnter your temp in (K): ");
            scanf("%lf", &temp);
            temp = (temp - 273);
            printf("The temp in C is: %.1lf", temp);

        }else if(unit2 == 'F'){
            printf("\nEnter your temp in (K): ");
            scanf("%lf", &temp);
            temp = (temp - 273) * 9/5 + 32;;
            printf("The temp in F is: %.1lf", temp);
        }


   }else{
     printf("Invalid Input!!!!!!");
   }
     return 0;

}