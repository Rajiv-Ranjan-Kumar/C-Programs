//Write A Function To Calculate Standard Deviation Of Given Element.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void standard_deviation(int[] , int);
int main()
{
    int i , size ;
    ///input size of array..
    printf("\n\tEnter The Size Of Array : ");
    scanf("%d" , &size);
    int num[size] ;

    ///check size > 1
    if(size < 2)
    {
        printf("\n\tPlease Enter Greater Then 1 (size > 2) Value ");
        getch();
        return 0 ;
    }

    ///input Elements..
    for(i = 0 ; i < size ; i++)
    {
        printf("\n\tEnter %d Element : " , i+1);
        scanf("%d" , &num[i]);
    }
    standard_deviation(num , size); //function callinig
    getch();
    return 0;
}

void standard_deviation(int num2[] , int size2)
{
    int i ;
    int sum = 0 ; //sum of All X
    float sum2 = 0 ;//sum of All (X-M) * (X-M)
    float mean ; // Mean
    float X_M[size2] ; // X-M
    float SQR_X_M[size2] ;//(X-M) * (X-M)
    system("cls");

    ///print Given Elements...
    printf("\n\tGiven Elements Is :\n");
    for(i = 0 ; i < size2 ; i++)
    {
        printf("\t%d" , num2[i]);
        sum = sum + num2[i]; // calculate sum of All Elements
    }
    mean = sum / (size2+0.0) ; //calculate mean
    for(i = 0 ; i < size2 ; i++)
    {
        X_M[i] = num2[i] - mean ; //calculate X-M
        SQR_X_M[i] = X_M[i] * (X_M[i]) ; //calculate (X-M)*(X-M)
        sum2 = sum2 + SQR_X_M[i] ; //calculate Sum of All (X-M)*(X-M)
    }

    ///print menu Baar....
    printf("\n\n\n\n\tX\tMean(M)\t\tX-M\t\t(X-M)*(X-M)\n\n");

    ///print All Calculate Elements...
    for(i = 0 ; i < size2 ; i++)
    {
         printf("\t%d\t\t     %f\t\t%f" , num2[i] , X_M[i] , SQR_X_M[i]);
         if(i == size2 / 2)
            printf("\r\t%d\t%f" , num2[i] , mean);
         printf("\n");
    }

    printf("\t==================================================");
    printf("\n\t%d\t\t\t\t\t%f" , sum , sum2); //print sum and sum2
    printf("\n\n\tStandard Deviation = rot(Sum Of (X-M)*(X-M)/N)");//print formula of standard deviation
    printf("\n\n\t\t\t= %.4f Ans." , sqrt(sum2/size2));//print Answer
}
