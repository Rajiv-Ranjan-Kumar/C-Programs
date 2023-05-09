//W.A.P To Print First N Odd Natural Numbers .
main()
{
    int num , i = 1;
    printf("Enter a Number :");
    scanf("%d",&num);
    while(num >= i)
    {
        if(i % 2 != 0)
        {
            printf("%d\n" , i);
        }
    i++;
    }
}
