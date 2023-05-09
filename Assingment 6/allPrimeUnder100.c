//W.A.P. To Print All Prime Numbers Under 100 .
main()
{
    int i , j = 2 , c  ;
    printf("\n\t All Prime Number Between 1 To 100\n");
    for(i = 2 ; i <= 100 ; i++)
    {
        c = 1;
        for(j = 2 ; j < i ; j++)
        {
            if(i % j == 0)
            {
                c = 0;
                break;
            }
        }
        if(c == 1)
            printf("%d ",i);
    }
    getch();
}

