//W.A Function To Calculate Factorial Of A Numbers(TSRS).
#include <stdio.h>
#include <stdlib.h>
int Factorial (int);
int main()
{

    int num , x ;
    printf("Enter a Number :- ");
    scanf("%d" , &num);
    x=Factorial(num);
    printf("Factorial Of %d = %d" , num , x);
    getch();
    return 0;
}
int Factorial (int num)
{
    int fact = 1 ;
    for(num ; num > 0 ; num--)
        fact = fact * num ;
    return(fact);
}
