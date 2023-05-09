/* 1
   12
   123
   1234  */
main()
{
    int i , j ;
   /* for(i = 1 ; i <= 4 ; i++)
    {
        for(j = 1 ; j <= 4 ; j ++)
        {
            if(j <= i)
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }*/

    for(i = 1 ; i <= 4 ; i ++)
    {
        for(j = 1 ; j <= i ; j++)
            printf("%d" , j);
        printf("\n");
    }
    getch();
}
