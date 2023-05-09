//Write A Function To Calculate Mean Deviation Of The Given Array .
#include <stdio.h>
#include <stdlib.h>
void mean_deviation(int[] , int);
int main()
{
    int i , size ;

    printf("\n\tEnter The Size Of Array : ");
    scanf("%d" , &size);
    if(size < 2)
        {
            printf("\n\tPlease Enter Size Greater Then 2 (size > 2)");
            return 0;
        }
    int num[size] ;
    for(i = 0 ; i < size ; i++)
        {
            printf("\n\tEnter %d Element : " , i+1);
            scanf("%d" , &num[i]);
        }
    mean_deviation(num , size);
    getch();
    return 0 ;
}
void mean_deviation(int num2[] , int size2)
{
    int i ;
    int sum = 0 ; //sum Of All Element X
    float mean ; // mean calculate
    float x_m[size2] ; //X-M calculate
    float mod_x_m[size2] ; //|X-M| calculate
    float sum2 = 0 ;//sum of |X-M|

    system("cls");
    ///print Input Element
    printf("\tGiven Element \n");
    for(i = 0 ; i < size2 ; i++)
        printf("\t%d" , num2[i]);
    printf("\n");

    ///calculate sum Of All Element X
    for(i = 0 ; i < size2 ; i++)
        sum = sum + num2[i] ;

    ///calculate mean
    mean = sum / (size2+0.0) ;
    ///print menu Baar
    printf("\n\tX\t  Mean(M)\tX-M\t\t  |X-M|\n");

    ///calculate X-M
    for(i = 0 ; i < size2 ; i++)
        x_m[i] = num2[i] - mean ;

    ///calculate |X-M| , Sum Of |X-M|
    for(i = 0 ; i < size2 ; i++)
    {
        if(x_m[i] < 0)
             mod_x_m[i] =-(x_m[i]);
        else
            mod_x_m[i] = x_m[i] ;

        ///calculate sum of |X-M|
        sum2 = sum2 + mod_x_m[i];
    }

    ///print All Calculation...
    for(i = 0 ; i < size2 ; i++)
        {
            printf("\t%d\t\t\t%f\t%f" , num2[i] , x_m[i] , mod_x_m[i]);
            if(i == size2 / 2)
                printf("\r\t%d\t%f",num2[i],mean);
            printf("\n");
        }

    printf("\t==================================================");
    printf("\n\t%d\t\t\t\t\t%f" , sum , sum2);///print Sum Of All X And Sum Of All |X-M|

    printf("\n\n\tMEAN DEVIATION  = Sum Of |X-M| / Total Numbers Of X \n\n");
    printf("\t\t\t= %f / %d\n\n\t\t\t= %f Ans." , sum2 , size2 , sum2/size2);///print mean Divation
}
