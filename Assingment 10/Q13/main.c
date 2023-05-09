//W.A Recursive Function To Print Octal Equivalent Of a Given Decimal Number.
#include <stdio.h>
#include <stdlib.h>
int octal = 0 ;
int flag = 0 ;
int rev = 0;
int c = 0 ;

int decimal_to_octal(int);
int output ();
int main()
{
    int num ;
    printf("Enter Decimal Number : ");
    scanf("%d" , &num);
    decimal_to_octal(num);
    output();
    octal = rev ;
    if(flag == 1)
        {
            while(c != 0)
            {
                octal = octal * 10 ;
                c--;
            }
        }
    printf("OCTAL = %d" , octal);
    getch();
    return 0;
}
int decimal_to_octal(int decimal)
{
    int quotient , remender ;
    if (decimal == 0)
        return 0 ;
    remender = decimal % 8 ;
    octal = octal * 10 + remender ;
    if (octal == 0)
    {
        flag = 1 ;
        c++;
    }
    quotient = decimal / 8 ;
    decimal = quotient ;
    decimal_to_octal(decimal);
}


int output()
{
    int r ;
    if (octal == 0)
        return 0 ;
    r = octal % 10 ;
    rev = rev * 10 + r ;
    octal = octal / 10 ;
    output();
}

