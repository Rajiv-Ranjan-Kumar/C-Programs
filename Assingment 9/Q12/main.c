//W.A Function To Find Next Prime Number Of A Given Number.(TSRS)
#include <stdio.h>
#include <stdlib.h>
int Next_Prime (int);

int main()
{
   int num , x ;
    printf("Enter a Number :- ");
    scanf("%d" , &num);
    x=Next_Prime(num);
    printf("Next Prime Number Of %d = %d " , num , x );
    getch();
    return 0;
}
int Next_Prime (int num)
{
    int i , j , f  ;
    for( ; ; )
    {
        f = 0 ;
        num = num + 1;
        for(i = 2 ; i < num ; i++)
        {
            j = num % i ;
            if (j == 0)
            {
                f = 1 ;
                break;
            }
        }
        if(f == 0)
            return(num);
    }
}
