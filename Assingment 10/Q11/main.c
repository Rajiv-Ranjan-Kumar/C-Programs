//W.A Recursive Function To Calculate Sum Of Digits Of A Given Numbers.
#include <stdio.h>
#include <conio.h>
int sum_digit(int);
int r = 0 , sum = 0 ;
int sum_digit(int n)
{
    if(n <= 0)
        return 1 ;
    r = n % 10 ;
    sum = sum + r ;
    n = n / 10 ;
    sum_digit(n);
    return (sum) ;
}
int main()
{
    int num ;
    printf("Enter A Number : ");
    scanf("%d" , &num);
    printf("Sum Of Digits Of A Given Number = %d" ,  sum_digit(num));
    getch();
    return 0;
}
