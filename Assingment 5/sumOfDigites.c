//W.A.P. To Calculate Sum Of Digits Of a Given Number .
main()
{
    int c = 0 , i = 0 , num ;
    printf("Enter a Number To Calculate Sum Of Digits :");
    scanf("%d" , & num);
    while(num > 0 || num < 0)
    {
        i = num % 10 ;
        c = c + i ;
        num = num / 10 ;
    }
    printf("Sum Of Digits = %d" , c);
    getch();
}
