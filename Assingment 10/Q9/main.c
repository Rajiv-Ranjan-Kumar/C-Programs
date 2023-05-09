//W.A Recursive Function To Calculate Sum Of First N Odd Natural Numbers.
#include <stdio.h>
#include <conio.h>
int sum_n_natural_number(int);
int i = 0 , sum = 0 ;
int sum_n_natural_number(int n)
{
    if(n == i)
        return 1 ;
    i++;
    if(i % 2 != 0)
        sum = sum + i ;
    sum_n_natural_number(n);
    return (sum) ;
}
int main()
{
    int num ;
    printf("Enter A Number : ");
    scanf("%d" , &num);
    printf("Sum Of First N Odd Natural Number = %d" ,  sum_n_natural_number(num));
    getch();
    return 0;
}
