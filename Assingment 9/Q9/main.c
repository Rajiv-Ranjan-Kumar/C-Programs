//W.A Function To Calculate Number Of Permutations Which Can Made Form N Items , Selected R At A Time . (TSRS)
#include <stdio.h>
#include <stdlib.h>
int Permutations (int , int);

int main()
{
    int n , r , x ;
    printf("Enter Total Numbers Of Items : ");
    scanf("%d" , &n);
    printf("Enter Selected Numbers Of Items : ");
    scanf("%d" , &r);
    if(n > r)
    {
        x=Permutations(n,r);
        printf("Permutation = %d " , x);
    }
    else
        printf("permutations Calculation is Not Possible");
    getch();
    return 0;
}
int Permutations (int p , int q)
{
    int s = 1 , temp ;
    temp = p - q ;
    for(p ; p > temp ; p--)
        s = s * p ;
    return(s);

}
