//W.A Recursive Function To Calculate HCF Of Two Number.
#include <stdio.h>
#include <stdlib.h>
int rem =-1;
int hcf (int , int);
int main()
{
    int num1 , num2 , temp ;
    printf("Enter Two Number To Calculate HCF : ");
    scanf("%d%d" , &num1 , &num2);
    if(num1 > 0 && num2 > 0)
    {
        if(num1 > num2)
    {
        temp = num1 ;
        num1 = num2 ;
        num2 = temp ;
    }
    temp = hcf(num1 , num2);
    printf("HCF = %d" , temp);
    }
    else
        printf("Please Enter (+)ve Number");
    getch();
    return 0 ;
}
int hcf(int num1 , int num2)
{
    if(rem == 0)
    {
        return num1;
        return 0;
    }
    rem = num2 % num1 ;
    if(num1 > rem && rem != 0)
    {
        num2 = num1 ;
        num1 = rem ;
    }
    else
        num2 = rem ;
    hcf(num1 , num2);
}
