//Write A Function To Rotate An Array Towards Right By One Position.
#include <stdio.h>
#include <stdlib.h>
void rotate(int[] , int);
int main()
{
    int i , no_element ;
    printf("Enter Number Of Elements : ");
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

    rotate(num , no_element);
    getch();
    return 0;
}
void rotate(int num2[] , int size)
{
    int i , temp ;
    //Display Element Before Rotation
    printf("\n\n\tDisplay Element Before Rotation An Array Towards Right By One Position\n\n");
    for(i = 0 ; i < size ; i++)
        printf("\t%d" , num2[i]);

    //Rotate An Array Towards Right By One Position
    temp = num2[size - 1];
    for(i = 0 ; i < size ; i++)
        num2[size-i] = num2[(size-1)-i];
    num2[0] = temp ;

    //Display Element After Rotation
    printf("\n\n\n\tDisplay Element After Rotation An Array Towards Right By One Position\n\n");
    for(i = 0 ; i < size ; i++)
        printf("\t%d" , num2[i]);
}
