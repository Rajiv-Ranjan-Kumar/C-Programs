//W.A Function To Print All Prime Numbers Between Two Given Numbers.(TSRN)
#include <stdio.h>
#include <stdlib.h>
void All_Prime(int , int);

int main()
{
    int n1 , n2 , x ;
    printf("Enter First Number : ");
    scanf("%d" , &n1);
    printf("Enter Second Number : ");
    scanf("%d" , &n2);
    All_Prime(n1,n2);
    getch();
    return 0;
}
void All_Prime(int num1 , int num2)
{
    int i ;
    if(num1 > 0 && num2 > 0)
    {
        if(num1 > num2 )
        {
            int temp = num1 ;
                num1 = num2 ;
                num2 = temp ;
        }
        printf("Total Prime Number Between %d And %d Is :\n" , num1 , num2);
        for(num1 ; num1 <= num2 ; num1++)
        {
            int f = 0 ;
            for(i = 2 ; i < num1 ; i++)
            {
                 if(num1 % i == 0)
                 {
                     f = 1 ;
                     break;
                 }
            }
            if(f == 0)
                printf(" %d" , num1);
        }
    }
    else
        printf("Not Possible");
}
