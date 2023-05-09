//Write A Program To Print First N Prime Numbers .
main()
{
    int num , i , j , f = 0 ;
    printf("Enter a Number To Print First N Prime Number : ");
    scanf("%d" , &num);
    if(num > 0)
    {
         for(i = 2 ; i <= num ; i++)
        {
            for(j = 2 ; j < i ; j++)
            {
                f = 0 ;
                if(i % j == 0)
                {
                    f = 1 ;
                    break ;
                }
            }
            if(f == 0)
                printf("%d " , i);
        }
    }

    else
        printf("Not Possible");
    getch();
}
