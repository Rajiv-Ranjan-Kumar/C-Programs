//W.A Function To Calculate Number Of Combinations Which Can Made Form N Items , Selected R At A Time . (TSRS)
#include <stdio.h>
#include <stdlib.h>
int Combinations (int , int);

int main()
{
    int n , r , x ;
    printf("Enter Total Numbers Of Items : ");
    scanf("%d" , &n);
    printf("Enter Selected Numbers Of Items : ");
    scanf("%d" , &r);
    if(n > r)
    {
        x=Combinations(n,r);
        printf("Combination = %d " , x);
    }
    else
        printf("Combinations Calculation is Not Possible");
    getch();
    return 0;
}
int Combinations (int p , int q)
{
    int s = 1 , y = 1 , temp ;
    temp = p - q ;
    for(p ; p > temp ; p--)
        s = s * p ;
    for(q ; q > 0 ; q--)
        y = y * q ;
    s = s / y ;
    return(s);

}
