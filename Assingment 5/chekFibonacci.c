//W.A.P.To Check Whether a Given Number Is a Term In Fibonacci Series Or Not .
main ()
{
    int a = 0 , b = 1 , t , c , d=0 , num ;
    printf("Enter The Series To Check Fibonacci Or Not: ");
    scanf("%d",&num);
    printf("\nThe Series Are Start With 0 (0 is First Term) \n\n");
    //printf("%d %d ",a,b);
    for( t = 1 ; t <= num ;  t++)
    {
        c = b ;
        b = a + b ;
        a = c ;
        if( num == b)
            d++;
    }
    printf((d == 1)? "%d Is Fibonacci Series" : "%d Is Not Fibonacci Series",num) ;
    getch();
}
