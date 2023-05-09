//W.A.P To Print First 10 Odd Natural Numbers In Reverse Order.
main()
{
    int i = 20 , c = 1 ;
    while(c <= 10)
    {
        if(i % 2 != 0)
        {
            printf("%d\n" , i);
            c++;
        }
    i--;
    }
}
