//W.A.P To Calculate HCF Of Two Number .
main()
{
    int num1 , num2 , r = 0 , t , p;
    printf("Enter Two Number To Find Hcf :");
    scanf("%d %d" , &num1 , &num2);
    t = num1 ;
    p = num2 ;
    if(num1 > 0 && num2 > 0)
    {
        if (num1 < num2 )
        {
            num1 = num2 ;
            num2 = t ;
        }
            do
            {
                r = num1 % num2 ;
                if (r != 0)
                {
                    if(num2 > r)
                    {
                        num1 = num2 ;
                        num2 = r ;
                    }
                    else
                        num1 = r ;
                }
            }while(r != 0) ;
            printf("HCF Of %d And %d = %d" , t , p , num2) ;
    }
    else
        printf("HCF Of %d And %d Not Possible" , t , p);

getch();
}
