//Write a Program To Calculate Sum Of 10 Numbers Stored in an Array.
#include <stdio.h>
#include <stdlib.h>
void sum();
int main()
{
    sum();
    getch();
    return 0;
}
void sum()
{
   int num[10] , i , sum = 0 ;
   printf("Enter 10 Numbers For Calculate Sum :\n");
   for(i = 0 ; i <= 9 ; i++)
        scanf("%d" , &num[i]);
   // calculate sum
   for(i = 0 ; i <= 9 ; i++)
        sum = sum + num[i] ;
   printf("SUM = %d" , sum);
}
