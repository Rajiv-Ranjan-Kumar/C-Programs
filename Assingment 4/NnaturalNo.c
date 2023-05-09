//W.A.P To Print N Natural Number .
main()
{
    int i = 1 , num ;
    printf("Enter a Number :-");
    scanf("%d" , &num);
    while(i != (num+1))
    {
        printf("%d\n",i++);
    }
    getch();
}
