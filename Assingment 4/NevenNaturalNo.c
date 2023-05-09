//W.A.P.To Print First N Even Natural Numbers .
main()
{
    int num , i = 1 ;
    printf("Enter a Number : ");
    scanf("%d" , &num);
    while(i <= num)
        printf("%d\n" , 2*i++);
    getch();
}
