//W.A Recursive Function To Print First N Even Natural Numbers In Reverse Order.
#include <stdio.h>
#include <conio.h>
int even_natural_no(int);
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
    if(n == 0)
        return 1;
    if(n % 2 == 0)
        printf(" %d" , n);
    even_natural_no(n-1);
}
