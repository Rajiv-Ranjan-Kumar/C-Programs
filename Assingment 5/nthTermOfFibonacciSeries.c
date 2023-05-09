////W.A.P. To Find Nth Terms Of a Fibonacci Series.
main()
{
    int a = 0 , b = 1 , c , t , num ;
    printf("Enter The Term of a Fibonacci Series : ");
    scanf("%d",&num);
    printf("\nThe Series Are Start With 0 (0 is First Term) \n\n");
    //printf("%d %d ",a,b);
    t = num ;
    for( num ; num > 2 ;  num-- )
    {
        c = b ;
        b = a + b ;
        a = c ;
    }
    printf("%d Term = %d " , t , b);
    getch();
}
