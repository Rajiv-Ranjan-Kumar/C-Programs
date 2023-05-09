//W.A Program To calculate Average Of 10 Numbers . Use Array To Store 10 Numbers.
#include <stdio.h>
#include <stdlib.h>
void average();
int main()
{
    average();
    getch();
    return 0;
}
void average()
{
    int num[10] , i , sum = 0 ;
    float avg ;
    printf("Enter 10 Number For Calculate Average :\n");
    for(i = 0 ; i <= 9 ; i++)
       scanf("%d" , &num[i]);

    // calculate average

    for(i = 0 ; i <= 9 ; i ++)
        sum = sum + num[i];
    avg = sum / 10.0 ;
    printf("Average = %f" , avg);
}
