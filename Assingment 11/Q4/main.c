//write A Program To Find Greatest Element In An Array Of Size 10.
#include <stdio.h>
#include <stdlib.h>
void greatest_element();
int main()
{
    greatest_element();
    getch();
    return 0;
}
void greatest_element()
{
    int num[10] , i , temp ;
    printf("Enter 10 Numbers To Find Greatest Element : \n");
    for(i = 0 ; i <= 9 ; i++)
        scanf("%d" , &num[i]);

    //Find Greatest Element

    temp = num [0];
    for(i = 0 ; i <= 9 ; i++)
        if(temp < num[i])
            temp = num[i];
    printf("Greatest Element = %d" , temp);
}
