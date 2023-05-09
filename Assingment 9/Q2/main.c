//W.A.Function To Calculate Circumference Of A Circle.(TSRS)
#include <stdio.h>
#include <conio.h>
float circumference(int);
int main()
{
    int r ; float c ;
    printf("\nEnter The Rediase For Calculate Circumference : ");
    scanf("%d", &r);
    c = circumference(r);
    printf("\nCircumference = %f" , c);
    getch();
    return 0;
}

float circumference(int r)
{
    float s = 2 * 3.14 * r ;
    return(s);
}
