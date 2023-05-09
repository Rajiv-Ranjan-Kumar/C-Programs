//W.A Recursive Function To Print First N Natural Numbers In Reverse Order.
#include <stdio.h>
#include <conio.h>
int natural_no(int);
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
    if(n == 0)
        return 1;
    printf(" %d" , n);
    natural_no(n-1);
}
