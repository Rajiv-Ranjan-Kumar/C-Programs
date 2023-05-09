//W.A.P To Print Next Prime Number Of A Given Number .
main()
{
    int num , i , f ;
    printf("Enter a Number To Print Next Prime Number Of a Given Number : ");
    scanf("%d" , &num);
    if(num >= 0)
    {
        if(num == 0)
            num = num + 1;
        num++;

        for(num ;   ; num++)
        {
            f = 1 ;
            for(i = 2 ; i < num ; i ++)
            {
                if(num % i == 0)
                {
                    f = 0 ;
                    break ;
                }
            }
            if(f == 1)
            {
                printf("\nNext Prime Number = %d " , num);
                break ;
            }

        }
    }
    else
        printf("\n Not Possible");
    getch();
}
