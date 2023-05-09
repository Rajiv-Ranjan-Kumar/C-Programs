//Write a Program To Swap Value Of Two Int Variables Without Using Third Variable.
main()
{
    int num1,num2;
    printf("Enter First Number :-");
    scanf("%d",&num1);
    printf("Enter Second Number :-");
    scanf("%d",&num2);
    printf("\n\n\tBefor Swap\n\n\tFirst Number = %d\n\tSecond Number = %d",num1,num2);
    num1 = num1 + num2 ;
    num2 = num1 - num2 ;
    num1 = num1 - num2 ;
    printf("\n\n\tAfter Swap\n\\tFirst Number = %d\n\tSecond Number = %d",num1,num2);
    getch();
}
