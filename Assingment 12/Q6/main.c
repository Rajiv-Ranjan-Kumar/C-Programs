//Write A Function To Print Frequency Of Each Element Of The Array .
#include <stdio.h>
#include <stdlib.h>
void friquency(int[] , int);
int main()
{
    int i , size ;
    printf("Enter Number Of the Element : ");
    scanf("%d" , &size);
    if(size < 2)
    {
        printf("Please Enter Greater Than 2 (number > 2) Number");
        getch();
        return 0;
    }
    int num[size];
    for(i = 0 ; i < size ; i++)
    {
        printf("\nEnter %d Number :" , i+1);
        scanf("%d" , &num[i]);
    }
    friquency(num , size);
    getch();
    return 0;
}
void friquency(int num2[] , int size2)
{
    int i , j , k , count ;
    int fri[size2];
    ///Print All Input Element
    system("cls");
    printf("\n\n\tGiven Element By User\n");
    for(i = 0 ; i < size2 ; i++)
        printf("\t%d" , num2[i]);
    ///calculate frequency ....
    for(i = 0 ; i < size2 ; i++)
    {
        count = 0 ;
        for(j = 0 ; j < size2 ; j++)
            if(num2[i] == num2[j])
                count++;
       fri[i]=count;
    }
    ///output.....
    printf("\n\n\tElement\tFrequency");
   for(i = 0 ; i < size2 ; i++)
    {
        for(j = i+1 ; j < size2 ; j++)
            if(num2[i] == num2[j])
            {
                for(k = j ; k < size2 ; k++)
                    {
                        num2[k] = num2[k+1];
                        fri[k] = fri[k+1];
                    }
                 size2--;
            }
        printf("\n\t  %d\t  %d" , num2[i] , fri[i]);

    }
}
