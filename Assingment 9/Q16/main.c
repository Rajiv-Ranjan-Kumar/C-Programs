//W.A Function To Remove All Occurrence Of a Given Digit From a Give Number.
#include <stdio.h>
#include <stdlib.h>
//====GLOBAL VARIABLE DECLARATION====//
int c = 0 ;
int sum = 0;
//===================================//

//====FUNCTION DECLARATION====//
void remove_all_occurrence(int);
int get_digit(int);
void display();
//============================//

//====GET DIGIT FUNCTION BODY====//
int get_digit(int num)
{
    int r ;
    r = num % 10 ;
    return r;
}
//===============================//

//====REMOVE ALL OCCURRENCE FUNCTION BODY====//
void remove_all_occurrence(int r)
{
    int r2 , t , rev ;
    switch(c)
    {
    case 1 :
        sum = sum * 10 + r ;
        break ;

    default :
        rev = sum ;
        while(rev != 0)
        {
            r2 = rev % 10 ;
            if(r != r2)
                t = 1 ;
            else
                {
                    t = 0 ;
                    break ;
                }
            rev = rev / 10 ;
        }
        if(t == 1)
            sum = sum * 10 + r ;
        break ;
    }
}
//=============================================//

//====DISPLAY FUNCTION BODY ====//
void display()
{
    int r , rev = 0 ;
    while(sum != 0)
    {
        r = sum % 10 ;
        rev = rev * 10 + r ;
        sum = sum / 10 ;
    }
    printf("\nFinal Result = %d" , rev);
}
//================================//

//====MAIN FUNCTION====//
int main()
{
    int num , temp ;
    printf("Enter number :");
    scanf("%d" , &num);
    while(num != 0)
    {
        c++;
        temp = get_digit(num);
        remove_all_occurrence(temp);
        num = num / 10 ;
    }
    c = 0 ;
    display();
    getch();
    return 0 ;
}
//=======================//
