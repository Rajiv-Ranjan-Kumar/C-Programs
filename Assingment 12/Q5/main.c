//Write A Function To Print Distinct Elements Of Given Array .
#include <stdio.h>
#include <stdlib.h>
void Distinct_Element(int[] , int);
int main()
{
    int i , size ;
    printf("Enter Total Number Of Element : ");
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
    Distinct_Element(num , size);
    getch();
    return 0;
}
void Distinct_Element(int num2[] , int size)
{
    int i , j , temp , flag , k;
    ///pint All input Element...
    printf("\n\t\t*All Element*\n");
    for(i = 0 ; i < size ; i++)
        printf("\t%d" , num2[i]);
    ///calculate And Print Distinct Element...
    printf("\n\n\t\t*Distinct Element*\n");
    for(i = 0 ; i < size ; i++)
    {
        for(j = i+1 ; j < size ; j++)
            if(num2[i] == num2[j])
            {
                for(k = j ; k < size ; k++)
                    num2[k] = num2[k+1];
                size--;
            }
        printf("\t%d" , num2[i]);

    }
}

