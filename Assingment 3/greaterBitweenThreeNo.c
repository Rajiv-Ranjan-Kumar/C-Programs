//W.A.P.To Find Greater Among Three Number.
main()
{
    int num1 , num2 , num3 ;
    printf("Enter Three Number For Find Greatest Number :- ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1 == num2 && num2 == num3 && num1 == num3)
    {
         printf("Three Numbers Are Equal\nPlease Try Again Later");
    }
    else
    {
        if(num1 >= num2 && num1 > num3)
        {
            printf("Greatest Number = %d" , num1);
        }
        if(num2 > num1 && num2 >= num3)
        {
            printf("Greatest Number = %d" , num2);
        }
        if(num3 >= num1 && num3 > num2)
        {
            printf("Greatest Number = %d" , num3);
        }
        (num1 == num2)?printf("\nBut First And Second Number Are Equal") : (num2 == num3)?printf("\nBut Second And Third Number Are Equal") : (num1 == num3)?printf("\nBut First And Third Number Are Equal") : printf("");
    }
    getch();
}
