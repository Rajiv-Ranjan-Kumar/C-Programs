/*      1
       121
      12321
     1234321   */
main()
{
    int i , j , k ;
    for(i = 1 ; i <= 4 ; i++)
    {
        k = 0 ;
        for(j = 1 ; j <= 7 ; j++)
        {
            if(j >= 5-i && j <= 8-(5-i))
                (j<5)? printf("%d" , ++k): printf("%d",--k);
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}

