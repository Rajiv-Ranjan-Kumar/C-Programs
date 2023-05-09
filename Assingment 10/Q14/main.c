//W.A Recursive Function To Print Reverse Of a Given Number.
#include <stdio.h>
#include <stdlib.h>
int rev = 0 ;
int reverse (int);
int main()
{
    int num ;
    printf("Enter a Number For Reverse : ");
    scanf("%d" , &num);
    reverse(num);
    printf("Reverse Number = %d " , rev);
    getch();
    return 0;
}
int reverse (int num)
{
    int r ;
    if (num == 0)
        return 0 ;
    r = num % 10 ;
    rev = rev * 10 + r ;
    num = num / 10 ;
    reverse(num);
}
