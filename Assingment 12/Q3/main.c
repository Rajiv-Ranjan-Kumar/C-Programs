//Write A Function To Short An Array Of Size n .
#include <stdio.h>
#include <stdlib.h>
void shorting(int[] , int);
int main()
{
    int i , size ;
    printf("Enter Total Number Of Elements : ");
    scanf("%d" , &size);
    if(size < 0)
    {
        printf("\nPlease Enter Number Of Element Greater Then 0 (0 <...)");
        getch();
        return 0 ;
    }
    int num[size];
    for(i = 0 ; i < size ; i++)
    {
        printf("\n Enter %d Element : " , i+1);
        scanf("%d" , &num[i]);
    }
    shorting(num , size);
    getch();
    return 0;
}

void shorting(int num2[] , int size2)
{
    int i , j , temp ;
    ///Before Shorting Print Element
    printf("\n\n\n\tBefore Shorting Print Element\n\n");
     for(i = 0 ; i < size2 ; i++)
        printf("\t%d" , num2[i]);

    ///Shorting Calculation....
    for(j = 1 ; j <= size2 ; j++)
    {
        for(i = 0 ; i < size2-1 ; i++)
            if(num2[i] > num2[i+1])
            {
               temp = num2[i] ;
               num2[i] = num2[i+1];
               num2[i+1] = temp ;
            }
    }
    ///Before Shorting Print Element
    printf("\n\n\n\tAfter Shorting Print Element\n\n");
    for(i = 0 ; i < size2 ; i++)
        printf("\t%d" , num2[i]);
}
