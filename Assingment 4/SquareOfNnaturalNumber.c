//W.A.P To Print Squares Of First N Natural Number .
main()
{
    int i = 1 , num ;
    printf("Enter a Number : ");
    scanf("%d" , &num);
    while(num >= i)
    {
        printf("%d = %d\n" , i , i * i);
        i++;
    }
    getch();
}
