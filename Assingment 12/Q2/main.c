//Write A Function To Reverse An Array.
#include <stdio.h>
#include <conio.h>
void reverse_array(int[] , int);
int main()
{
    int i , no_element ;
    printf("Enter Total Number Of Element : ");
    scanf("%d" , &no_element);
    if(no_element < 0)
    {
        printf("\nPlease Enter Number Of Element Greater Then 0 (0 <...)");
        getch();
        return 0 ;
    }
    int num[no_element];
    for(i = 0 ; i < no_element ; i++)
    {
        printf("\nEnter %d Element : " , i+1);
        scanf("%d" , &num[i]);
    }
    reverse_array(num , no_element);
    getch();
    return 0;
}
void reverse_array(int num2[] , int size)
{
    int i , temp ;
    ///Print An Array Input Order
    printf("\n\n\n\tWithout Reverse An Array Element\n\n");
    for(i = 0 ; i < size ; i++)
        printf("\t%d" , num2[i]);

    ///Calculate An Array In Reverse Order
    for(i = 0 ; i < size - i ; i++)
    {
        temp = num2[i] ;
        num2[i] = num2[(size-1)-i];
        num2[(size-1)-i] = temp ;
    }
    ///Print An Array In Reverse Order
    printf("\n\n\n\tAfter Reverse An Array Element\n\n");
    for(i = 0 ; i < size ; i++)
        printf("\t%d" , num2[i]);
}
