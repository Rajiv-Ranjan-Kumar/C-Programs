//W.A.P To Print All Factors Of Given Number.
main()
{
    int num , r , i ;
    printf("Enter A Number to Calculate All Factors : ");
    scanf("%d" , &num);
    if(num > 0)
    {
        printf("All Factors Of %d =" , num);
        for(i = 1 ; i <= num ; i++)
        {
            r = num % i ;
            if(r == 0)
                printf(" %d" , i);
        }
    }
    else
        printf("\nCoding is Not Available For (-)ve Number");
    getch();
}
