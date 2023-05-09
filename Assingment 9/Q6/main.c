//W.A Function To Calculate Sum Of Squares Of First N Natural Numbers(TSRS).
#include <stdio.h>
#include <stdlib.h>
int sum_of_squares (int);
int main()
{
    int num , x ;
    printf("Enter a Number :- ");
    scanf("%d" , &num);
    x=sum_of_squares(num);
    printf("Sum Of Square Of %d Natural Numbers = %d" , num , x);
    getch();
    return 0;
}
int sum_of_squares (int num)
{
    int sum = 0 , i ;
    for(i=1 ; i<=num ; i++)
        sum = sum + i * i;
    return(sum);
}
