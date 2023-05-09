//W.A Function To Calculate Sum Of First N Natural Numbers(TSRS).
#include <stdio.h>
#include <stdlib.h>
int natural_number(int) ;

int main()
{
    int num , x ;
    printf("Enter a Number :- ");
    scanf("%d" , &num);
    x=natural_number(num);
    printf("Sum Of %d Natural Numbers = %d" , num , x);
    getch();
    return 0;
}

int natural_number(int num)
{
    int sum = 0 , i ;
    for(i=1 ; i<=num ; i++)
        sum = sum + i ;
    return(sum);
}
