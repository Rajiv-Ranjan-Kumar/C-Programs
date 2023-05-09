//W.R.Function To Calculate Area Of Circle . (TSRS)
#include <stdio.h>
#include <conio.h>
float area_of_circal(int);
int main()
{
    int r ;
    printf("Enter The Radius Of Circle : ");
    scanf("%d"  , &r);
    float s = area_of_circal(r);
    printf("Area Of Circle = %f " , s);
    getch();
    return 0;
}

float area_of_circal(int x)
{
    float s ;
    s = 3.14 * x * x ;
    return s ;
}
