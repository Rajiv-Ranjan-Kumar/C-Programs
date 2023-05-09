//W.A Recursive Function To Print First N Odd Natural Numbers.
#include <stdio.h>
#include <conio.h>
int odd_natural_number(int);
int i = 0 ;
int odd_natural_number(int n)
{
    if(n == i)
        return 1 ;
    i++ ;
    if(i % 2 != 0)
        printf(" %d" , i);
    odd_natural_number(n);
    return 0;
}
int main()
{
    int num;
    printf("Enter A Number : ");
    scanf("%d" , &num);
    odd_natural_number(num);
    getch();
    return 0;
}
