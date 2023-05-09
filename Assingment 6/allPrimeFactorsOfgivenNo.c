//W.A.P To Print All Prime Factors Of Given Number.
main()
{
    int num , r , i , j , r2 , f ;
    printf("Enter A Number to Calculate All Factors : ");
    scanf("%d" , &num);
    if(num > 0)
    {
        printf("All Prime Factors Of %d =" , num);
        for(i = 2 ; i <= num ; i++)
        {
            r = num % i ;
            if(r == 0)
            {
                f = 0 ;
                for(j = 2 ; j < i ; j++)
                {
                  r2 = i % j ;
                   if(r2 == 0)
                   {
                     f = 1 ;
                     break ;
                   }
                 }
                 if(f == 0)
                    printf(" %d" , i);
             }
         }
    }
    else
        printf("Coding is Not Available For (-)ve Number");
    getch();
}
