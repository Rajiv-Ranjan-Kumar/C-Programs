//W.A Recursive Function To Print Decimal Equivalent Of a Given Binary Number.
#include<stdio.h>
#include<conio.h>

int decimal = 0 ;
int pow = 1 ;
int flag = 0 ;

int binary_to_decimal(int);
int main()
{
    int num ;
    printf("Enter The Binary Number : ");
    scanf("%d" , &num);
    binary_to_decimal(num);
    if(flag == 0 )
        printf("DECIMAL NUMBER = %d" , decimal);
    getch();
    return 0 ;
}

int binary_to_decimal(int binary)
{
    int rem ;
    if(binary <= 0)
        return 0 ;
    rem = binary % 10 ;
    if(rem != 1 && rem != 0)
    {
        flag = 1 ;
        printf("\tPLEASE ENTER VAILID BINARY NUMBER") ;
        return 0 ;
    }
    decimal = decimal + rem * pow ;
    pow = pow * 2 ;
    binary = binary / 10 ;
    binary_to_decimal(binary);
}
