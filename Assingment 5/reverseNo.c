//W.A.P. To Reverse Of a Given Number .
main()
{
    int rev = 0 , r = 0 , temp , num ;
    printf("Enter a Number To Calculate Sum Of Digits :");
    scanf("%d" , & num);
    temp = num ;
    while(num > 0 || num < 0)
    {
        r = num % 10 ;
        rev = rev * 10 + r ;
        num = num / 10 ;
    }
    printf("Reverse Of %d = %d" , temp , rev);
    getch();
}
