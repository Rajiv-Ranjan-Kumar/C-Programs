//Write a Program To Print Given Number But Without Last Digit.
main()
{
    int num , a ;
    printf("Enter a Number :-");
    scanf("%d",&num);
    a = num ;
    num = num / 10 ;
    printf("Print %d Without Last Digit = %d",a,num);
    getch();
}
