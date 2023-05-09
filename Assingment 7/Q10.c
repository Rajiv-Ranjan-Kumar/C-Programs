main()
{
    int i , j ;
    for(i = 1 ; i <= 4 ; i++)
    {
        for(j = 1 ; j <= 4 ; j++)
        {
            if(j <= 5-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n\n");



    for(i = 1 ; i <= 4 ; i++)
    {
        for(j = 1 ; j <= 4 ; j++)
               {

                    if(j >= i )
                        printf("*");
                    else
                        printf(" ");
                }
        printf("\n");
    }

    printf("\n\n");

     for(i = 1 ; i <= 4 ; i++)
        {
            for(j = 1 ; j <= 4 ; j++)
            {
                if(j >= 5-i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }


         printf("\n\n");

           for(i = 1 ; i <= 4 ; i++)
    {
        for(j = 1 ; j<= 7 ; j++)
        {
            if(j >= i && j <= 8-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n\n");


     for(i = 1 ; i <= 4 ; i++)
    {
        for(j = 1 ; j <= 7 ; j++)
        {
            if(j >= 5-i && j <= 8-(5-i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n\n");


     for (i = 1 ; i <= 4 ; i++)
    {
       int p = 64 ;
        for (j = 1 ; j <= 7 ; j++)
        {
            if(j<=5-i||j>=3+i)
            {
                if(p==68)
                    p--;
                (j<=5-i)? printf("%c",++p) : printf("%c",p--) ;
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n\n");

    for(i = 1 ; i <= 4 ; i++)
    {
       int k = 0 ;
        for(j = 1 ; j <= 7 ; j++)
        {
            if(j >= 5-i && j <= 8-(5-i))
                (j<5)? printf("%d" , ++k): printf("%d",--k);
            else
                printf(" ");
        }
        printf("\n");
    }

     printf("\n\n");

     for(i = 1 ; i <= 5 ; i++)
    {
        for(j = 1 ; j <= 9 ; j++)
        {
            if(j >= 6-i && j <= 5 )
                {
                        printf(" *");
                }
            else
                printf(" ");
        }
        printf("\n");
    }

    getch();
}

