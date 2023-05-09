//W.A Recursive Function To Print First N Even Natural Numbers.
#include <stdio.h>
#include <conio.h>
int even_natural_no(int);
int i = 0 ;
int main()
{
    int num ;
    printf("Enter A Number : ");
    scanf("%d" , &num);
    even_natural_no(num);
    getch();
    return 0;
}
int even_natural_no(int n)
{
    if(n == i)
        return 1;
    i = i + 1 ;
    if(i % 2 == 0)
        printf(" %d" , i);
    even_natural_no(n);
}
