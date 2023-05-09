//W.A Recursive Function To Print First N Odd Natural Numbers In Reverse Order.
#include <stdio.h>
#include <conio.h>
int odd_natural_number(int);

int odd_natural_number(int n)
{
    if(n == 0)
        return 1 ;
    if(n % 2 != 0)
        printf(" %d" , n);
    odd_natural_number(--n);
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
