//W.A Function To Check Whether A Given Number Is An Armstrong Number Or Not.(TSRN)
#include <stdio.h>
#include <stdlib.h>

int armstrong ();
int temp = 0 ;

int main()
{
    int x ;
    x = armstrong ();
    (x == 1)? printf("%d Is A Armstrong Number" , temp):printf("%d Is A Not Armstrong Number" , temp);
    getch();
    return 0;
}
int armstrong ()
{
  int num , sum = 0 , r = 1;
  printf("Enter a Number : ");
  scanf("%d" , &num);
  temp = num ;
  while(num > 0)
  {
      r = num % 10 ;
      r = r * r * r ;
      sum = sum + r ;
      num = num / 10 ;
  }
  if(temp == sum)
      return(1);
  else
      return(0);
}
