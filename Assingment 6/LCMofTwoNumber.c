//W.A.P To Calculate LCM Of Two Numbers .
main()
{
    int num1 , num2 , l = 1 , i = 2 , t , f;
    printf("Enter Two Number To Find LCM : ");
    scanf("%d %d" , &num1 , &num2);
    t = num1 ;
    f = num2 ;
    if(num1 > 0 && num2 > 0)
    {
        while(num1 >=1 && num2 >= 1 && i <= num1 && i <= num2)
        {
            if(num1 % i == 0 && num2 % i == 0)
            {
                num1 = num1 / i ;
                num2 = num2 / i ;
                l = l * i ;
                continue;
            }
            i++ ;
        }
        printf("LCM Of %d And %d = %d", t , f ,l * num1 * num2);
    }
    else
        printf("Not Possible");
     getch();
}
