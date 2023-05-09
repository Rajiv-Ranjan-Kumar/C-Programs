#include <stdio.h>
#include <stdlib.h>
//#include <.h>

int main()
{
    char name[10] ;
    printf("Enter name :");
    gets(name);
    char p = name % 10;
     printf("%c" , p);
    return 0;
}
