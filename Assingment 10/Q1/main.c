//W.A Recursive Function To Print First N Natural Numbers.
#include <stdio.h>
#include <conio.h>
int natural_no(int);
int i = 0 ;
int main()
{
    int num ;
    printf("Enter A Number : ");
    scanf("%d" , &num);
    natural_no(num);
    getch();
    return 0;
}
int natural_no(int n)
{
    if(n == i)
        return 1;
    i = i + 1 ;
    printf(" %d" , i);
    natural_no(n);
}
