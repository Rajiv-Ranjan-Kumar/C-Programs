//Write A Program To Fiend The Smallest Element In An Array Of Size 10.
#include <stdio.h>
#include <stdlib.h>
void smallest_element();
int main()
{
    smallest_element();
    getch();
    return 0;
}
void smallest_element()
{
    int num[10] , i , temp ;
    printf("Enter 10 Numbers To Fiend Smallest Number :\n");
    for(i = 0 ; i <= 9 ; i++)
        scanf("%d" , &num[i]);
    //Fiend Smallest Number
    temp = num[0];
    for(i = 0 ; i <= 9 ; i++)
        if(temp > num[i])
            temp = num[i];
    printf("Smallest Number = %d" , temp);
}
