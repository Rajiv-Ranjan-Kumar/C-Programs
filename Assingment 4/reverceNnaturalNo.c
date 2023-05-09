//W.A.P. To Print N Natural Number In Reverse Order .
main()
{
    int num ;
    printf("Enter a number :-");
    scanf("%d" , &num);
    while(0 < num)
    {
        printf("%d\n" , num--);
    }
    getch();
}
