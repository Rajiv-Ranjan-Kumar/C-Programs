//Write a Program To Print Last Digit Of a Given Number.
main()
{
    int num,r;
    printf("Enter a Number :-");
    scanf("%d",&num);
    r = num % 10;
    printf("\nLast Digit = %d",r);
    getch();
}
