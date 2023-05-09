//Write A Program To Short An Array Of Size 10.
#include <stdio.h>
#include <stdlib.h>
void short_element();
int main()
{
    short_element();
    getch();
    return 0;
}

void short_element()
{
    int num[10] , i , j , temp ;
    printf("Enter 10 Numbers For Shorting :\n");
    for(i = 0 ; i <= 9 ; i++)
        scanf("%d" , &num[i]);
    //Shorting.........
    for(j = 1 ; j <= 10 ; j++)
    {
        for(i = 1 ; i <= 9 ; i++)
            if(num[i-1] > num[i])
            {
                temp = num[i-1];
                num[i-1] = num[i];
                num[i] = temp;
            }
    }
    //Display....
    printf("\tSHORTED ELEMENT\n ");
    for(i = 0 ; i <= 9 ; i++)
        printf("\t\t%d\n" , num[i]);
}
