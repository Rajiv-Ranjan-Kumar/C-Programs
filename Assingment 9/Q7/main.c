//W.A Function To Check Whether A Given Number Is Even Or Odd.(TSRS).(Return 1 If Even Otherwise Return 0).
#include <stdio.h>
#include <stdlib.h>
int even_or_odd (int);
int main()
{
    int num , x ;
    printf("Enter a Number :- ");
    scanf("%d" , &num);
    x=even_or_odd(num);
    (x == 1)?printf("%d Is Even Number " , num ):printf("%d Is Odd Number " , num);
    getch();
    return 0;
}
int even_or_odd (int num)
{
    if(num % 2 == 0)
        return(1);
    else
        return(0);
}
