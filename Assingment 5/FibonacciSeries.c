//W.A.P. To Print First N Terms Of a Fibonacci Series.
main()
{
    int a = 0 , b = 1 , c , num ;
    printf("Enter The Term of a Fibonacci Series To Print Series: ");
    scanf("%d",&num);
    printf("\nFibonacci Series Of %d Terms Is\n\n",num);
    printf("%d %d ",a,b);
    for( num ; num > 2 ;  num-- )
    {
        c = b ;
        b = a + b ;
        a = c ;
        printf("%d " , b);
    }
    getch();
}
