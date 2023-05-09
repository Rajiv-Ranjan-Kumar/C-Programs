//W.A.P To Print First N Odd Natural Numbers In Reverse Order.
main()
{
    int num ;
    printf("Enter a Number :");
    scanf("%d",&num);
    while(num > 0)
    {
        if(num % 2 != 0)
        {
            printf("%d\n" , num);
        }
    num--;
    }
}
