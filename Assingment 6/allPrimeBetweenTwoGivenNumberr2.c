//W.A.P To Print All Prime Numbers Between Two Given Number
main ()
{
    int num1 , num2 , t , i , f = 0 , c ;
    printf("Enter Two Number : ");
    scanf("%d %d" , &num1 , &num2);
    if(num1 < num2 && num1 >= 0)
    {  if(num1 == 0)num1 = num1 + 2 ; if(num1 == 1)num1++;
        t = num1 ;
        for(t ; t <= num2 ; t++)
        {
            c = 1 ;
            for(i = 2 ; i < t ; i++)
            {
                if(t % i == 0)
                {
                    c = 0 ;
                    break ;
                }
            }
            if(c == 1)
            {
                printf(" %d" , t);
                f = 1 ;
            }
        }
        if(f == 1)
            printf("\nAll Prime Number Between %d And %d" , num1 , num2);
        else
            printf("\nNot Prime Number Between %d And %d" , num1 , num2);
    }
    else
        printf("\nNot Possible To Find Prime Number Between %d And %d" , num1 , num2);
    getch();
}
