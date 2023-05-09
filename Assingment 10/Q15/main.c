//W.A Recursive Function To Find (N)tn Term Of Fibonacci Series.
#include <stdio.h>
#include <stdlib.h>
int a = -1 ;
int b = 1 ;
int fibonacci(int);
int main()
{
    int num ;
    printf("Enter a Number Of Term : ");
    scanf("%d" , &num);
    fibonacci(num);
    getch();
    return 0;
}
int fibonacci (int num)
{
    int c ;
    if(num == 0)
        return 0 ;
    c = a + b ;
    printf(" %d" , c);
    a = b ;
    b = c ;
    num--;
    fibonacci(num);

}
