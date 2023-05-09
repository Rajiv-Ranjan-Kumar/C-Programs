//W.A Function To Print All Armstrong Numbers In The Given Range.(TNRN)
#include <stdio.h>
#include <stdlib.h>

void all_armstrong(void);
int main()
{
    all_armstrong();
    getch();
    return 0;
}
void all_armstrong(void)
{
    int num1 , num2 , r = 1 , f = 0 , sum = 0 , temp ;
    printf("Enter First Number : ");
    scanf("%d",&num1);
    printf("Enter Second Number : ");
    scanf("%d",&num2);
    if (num1 > num2)
    {
            temp = num1 ;
            num1 = num2 ;
            num2 = temp ;
    }
    for(num1 ; num1 <= num2 ; num1 ++)
    {
        sum = 0 ;
        temp = num1 ;
        while(temp > 0)
        {
            r = temp % 10 ;
            r = r * r * r ;
            sum = sum + r ;
            temp = temp / 10 ;
        }
        if(sum == num1)
            {
                printf(" %d" , sum);
                f = 1 ;
            }
    }
    if( f == 0)
        printf("No Any Armstrong Number In Given Range");
}
