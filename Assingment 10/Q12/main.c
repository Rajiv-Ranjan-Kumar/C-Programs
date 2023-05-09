//W.A Recursive Function To Print Binary Equivalent Of a Given Decimal Number.
#include <stdio.h>
#include <stdlib.h>

int binary = 0 ;
int c = 0 ;
int flag = 0 ;
int rev = 0 ;

int decimal_to_binary(int);

int main()
{
    int num ;
    printf("Enter Decimal Number : ");
    scanf("%d" , &num);
    decimal_to_binary(num);
    output();
    binary = rev ;
    if(flag == 1)
        {
            while(c != 0)
            {
                binary = binary * 10 ;
                c--;
            }
        }
    printf("BINARY = %d" , binary);
    getch();
    return 0;
}
int decimal_to_binary(int num)
{
    int quotient , remender ;
    if(num == 0)
        return 0 ;
    remender = num % 2 ;
    quotient = num / 2 ;
    binary = binary * 10 + remender ;
    if (binary == 0)
    {
        flag = 1 ;
        c++;
    }
    num = quotient ;
    decimal_to_binary(num);
}

int output()
{
    int r ;
    if (binary == 0)
        return 0 ;
    r = binary % 10 ;
    rev = rev * 10 + r ;
    binary = binary / 10 ;
    output();
}
