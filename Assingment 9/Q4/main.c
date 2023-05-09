//W.A Function To Print First N Even Natural Numbers.(TSRN)
#include <stdio.h>
#include <conio.h>

void even_natural_number(int);
int main()
{
    int num ;
    printf("Enter a Number : ");
    scanf("%d" , &num);
    even_natural_number(num);
    getch();
    return 0;
}
void even_natural_number(int num)
{
    int i = 1 ;
    while(i <= num)
    {
        if(i % 2 == 0)
            printf("%d " , i);
        i++;
    }
}
