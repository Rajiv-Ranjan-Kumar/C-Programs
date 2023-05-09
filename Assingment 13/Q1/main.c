//Write A Program To Calculate Sum Of Two Matrices Each Of Order 3*3.
#include <stdio.h>
#include <stdlib.h>

int sum1(int[3][3] , int [3][3] , int);
void disp(int [3][3] , int);
int main()
{
    int i , j , c = 1 ;
    int matrix1[3][3];
    int matrix2[3][3];
    while(c <= 2)
    {
        system("cls");
        printf("\n\t\t\tEnter The %d" , c);
       (c == 1)?printf("st "):printf("nd ");
        printf("Metrics Of 3 X 3 Order\n\n");
        for(i = 0 ; i < 3 ; i++)
        {
            for(j = 0 ; j < 3 ; j++)
            {
                printf("\n\t\t\t\tEnter %d,%d Element : " , i , j);
                (c == 1)?scanf("%d" ,&matrix1[i][j]):scanf("%d" , &matrix2[i][j]);
            }
            printf("\n");
        }
        c++;
    }
    int add = sum(matrix1 , matrix2 , 3);
    //disp(add , 3);
    getch();
    return 0;
}


int sum(int matrix1[3][3] , int matrix2[3][3] , int size)
{
    int sum[3][3] ;
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
    //return(sum);
     for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            printf("%d\t" , sum[i][j]);
        }
        printf("\n");
    }
    return (sum , 3);
}

/*void disp(int sum[3][3] , int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            printf("%d\t" , sum[i][j]);
        }
        printf("\n");
    }
}*/
