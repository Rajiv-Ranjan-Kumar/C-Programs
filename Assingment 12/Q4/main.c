//Write A Function To Find The Index Of The Smallest Element Of An Array Of Size n.
#include<stdio.h>
#include<conio.h>
void find_index(int[] , int);
int main()
{
    int i , size ;
    printf("\n Enter Total Number Of Elements : ");
    scanf("%d" , &size);
    if(size < 2)
    {
        printf("\n\n\tPlease Enter Greater Then 1 (Number > 1) Number");
        getch();
        return 0;
    }
    int num[size] ;
    for(i = 0 ; i < size ; i++)
    {
        printf("\nEnter %d Number : " , i+1);
        scanf("%d" , &num[i]);
    }
    find_index(num , size);
    getch();
    return 0 ;
}

void find_index(int num2[] , int size2)
{
    int i , temp   , index = 0 ;

    ///Fiend Smallest Element
    temp = num2[0];
    for(i = 0 ; i < size2 ; i++)
        if(temp > num2[i])
            temp = num2[i];
    printf("\n\n\tSmallest Element = %d And", temp);

    ///Fiend Index Number Of Smallest Element
    for(i = 0 ; i < size2 ; i++)
        if(temp == num2[i])
          printf(", %d " , i);
    printf("Index Number Of Smallest Element");

}
