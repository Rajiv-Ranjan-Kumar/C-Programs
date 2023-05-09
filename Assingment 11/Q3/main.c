//write A Program To Calculate Sum Of All Even And Sum Of All Odd Numbers Stored In An Array Of Size 10.
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
    int num[10] , s1 = 0 , s2 = 0 , i ;
    printf("Enter 10 Numbers For Calculate Sum Of Even And Sum Of Odd Numbers :\n");
    for(i = 0 ; i <= 9 ; i++)
        scanf("%d" , &num[i]);
    //Calculate Sum
    for(i = 0 ; i <= 9 ; i++)
    {
        if(num[i] % 2 == 0)
            s1 = s1 + num[i];
        else
            s2 = s2 + num[i];
    }
    printf("Sum Of Even Numbers = %d \nSum Of Odd Numbers = %d " , s1 , s2);
}
