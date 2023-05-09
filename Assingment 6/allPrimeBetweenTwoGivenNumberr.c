//W.A.P.To Print All Prime Number Between Two Given Number .
main()
{
    int num1 , num2 , i , k , j , t , p;
    printf("\tIf You Enter (-ve)Number Than Change (+ve) Number By default \n\nEnter Two Number To Calculate All Prime Number : ");
    scanf("%d%d" , & num1 , &num2);
    if(num1 < 0 && num2 < 0)
    {
        num1 = -1 * num1 ;
        num2 = -1 * num2 ;
    }
    else if(num1 < 0)
        num1 = -1 * num1 ;
    else if(num2 < 0)
        num2 = -1 * num2 ;

    t = num1 ;
    p = num2 ;
    if(num1 == 1)
        num1++ ;
    else if(num1 == 0)
        num1 = num1 + 2 ;

    else if(num1 > num2)
    {
       int  temp = num1 ;
            num1 = num2 ;
            num2 = temp ;
            t = num2 ;
            p = num1 ;
        if(num1 == 1)
            num1++ ;
        else if(num1 == 0)
            num1 = num1 + 2 ;
    }

    for(num1 ; num1 <= num2 ; num1++)
    {
        k = 1 ;
        for(i = 2 ; i < num1 ; i++)
        {
            if(num1 % i == 0)
            {
                k = 0;
                break ;
            }
        }
        if(k == 1)
        {
           printf(" %d" , num1);
           j = 1 ;
        }

    }
    if(j != 1)
        printf("\nNot Prime Number Between %d And %d" , t , p);
    else
        printf("\nTotal Prime Number Between %d And %d" , t , p);
    getch();
}

