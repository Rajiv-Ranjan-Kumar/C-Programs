//W.A.P To Calculate HCF Of Two Number .
main()
{
    int num1 , num2 , t , p , q , r1 , r2 , i , hcf = 1 ;
    printf("Enter Two Number For Calculate HCF :-");
    scanf("%d %d" , &num1 , &num2);
    t = num1 ;
    p = num2 ;
    if(num1 > 0 && num2 > 0)
    {
        if(num1 > num2)
            q = num2 ;
        else
            q = num1 ;
        for(i = 1 ; i <= q ; i++)
        {
            r1 = num1 % i ;
            r2 = num2 % i ;
            if(r1 == 0 && r2 == 0)
                hcf = hcf * i ;
        }
        printf("HCF Of %d And %d = %d" , t , p , hcf);
    }
    else
        printf("HCF Of %d And %d Not Possible" , t , p);
    getch();
}
