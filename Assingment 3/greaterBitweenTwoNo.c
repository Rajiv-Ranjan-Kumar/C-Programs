//W.A.P.To Find Greater Between Two Number.s
main()
{
    int num1 , num2 ;
    printf("Enter Two Number For Check Greater Between Two Number :- ");
    scanf("%d %d" , & num1 , &num2);
    if(num1 != num2)
    {
        printf("Greater Number Between %d And %d = %d" , num1 , num2 ,(num1 > num2)? num1 : num2 );
    }
    else
    {
        printf("%d And %d Are Equal Number" , num1 ,num2);
    }
    getch();
}
