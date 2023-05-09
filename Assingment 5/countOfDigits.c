//W.A.P To Count Digits In a Given Number.
main()
{
   /* int i = 0 , c = 0 , num ;
    printf("Enter a Number To Count Digits : ");
    scanf("%d" , &num);
    do
    {
        i = num % 10 ;
        c++ ;
        num = num / 10 ;
    }while(num > 0 || num < 0);
    printf("Digits Of Number = %d" , c);
    getch();*/

    int i = 0 , c = 0 , num ;
    printf("Enter a Number To Count Digits : ");
    scanf("%d" , &num);
    while(num < 0 || num > 0)
    {
        i = num % 10 ;
        c++ ;
        num = num / 10 ;
         printf("\n%d",num);
    }
    printf("Digits Of Number = %d" , c);
    getch();
}
