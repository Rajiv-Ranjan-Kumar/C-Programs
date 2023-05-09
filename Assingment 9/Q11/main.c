//W.A Function To Check Whether A Given Number Is Prime Or Not.(TSRS).(Return 1 If Prime Otherwise Return 0).
#include <stdio.h>
#include <stdlib.h>

int prime_or_not (int);
int main()
{
    int num , x ;
    printf("Enter a Number :- ");
    scanf("%d" , &num);
    x=prime_or_not(num);
    (x == 1)?printf("%d Is Prime Number " , num ):printf("%d Is Not Prime Number " , num);
    getch();
    return 0;
}
int prime_or_not (int num)
{
    int i , t , f = 0 ;
    for(i = 2 ; i < num ; i++)
        {
            t = num % i ;
            if(t == 0)
                {
                    f = 1 ;
                    break;
                }
        }
    if(f == 0)
        return(1);
    else
        return(0);
}
