/* ABCDCBA
   ABC CBA
   AB   BA
   A     A   */
main()
{
    int i , j , p ;
    for (i = 1 ; i <= 4 ; i++)
    {
        p = 64 ;
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
    getch();
}
