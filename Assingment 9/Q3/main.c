//W.A Function to Print First n natural numbers.(TSRN)
#include <stdio.h>
#include <conio.h>

void natural_number(int);
int main()
{
    int num ;
    printf("Enter a number : ");
    scanf("%d" , &num);
    natural_number(num);
    getch();
    return 0;
}

void natural_number(int v)
{
  int i = 1 ;
  while(i <= v)
  {
       printf("%d " , i);
       i++;
  }
}
