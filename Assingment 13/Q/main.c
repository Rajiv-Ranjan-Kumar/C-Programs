//Write a Program To Short The Element Using The Bubble Short If Input The Element Of Array By Users.
#include <stdio.h>
#include <stdlib.h>
void Short (int [] , int);
int main()
{
    int size , i ;
    printf("\nEnter a Size Of Array : ");
    scanf("%d" , &size);
    int num[size] ;
    for(i = 0 ; i < size ; i++)
    {
        printf("\nEnter %d Element : " , i+1);
        scanf("%d" , &num[i]);
    }
    Short(num , size);
    getch();
    return 0;
}

void Short(int num1[] , int size)
{
    int i , j , temp ;
    ///Before Shorting Display Element
    printf("\n\nDisplay Element Of Before Shorting\n");
    for(i = 0 ; i < size ; i++)
        printf("%d\t" , num1[i]);

    ///Bubble Short
    for(j = 1 ; j <= size ; j++)
    {
        for(i = 0 ; i < size ; i++)
        {
            if(num1[i] > num1[i+1])
            {
                temp = num1[i] ;
                num1[i] = num1[i+1] ;
                num1[i+1]= temp ;
            }
        }
    }

    ///After Shorting Display Element
    printf("\n\nDisplay Element Of After Shorting\n");
    for(i = 0 ; i < size ; i++)
        printf("%d\t" , num1[i]);
}
