//Write a Program to Swap Value of Two Int Variable.
main()
{
    int num1,num2,temp;
    printf("Enter First Number :-");
    scanf("%d",&num1);
    printf("Enter Second Number :-");
    scanf("%d",&num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\n\n\tBefore Swap\n\n\tFirst Number = %d \n\tSecond Number = %d",temp,num1);
    printf("\n\n\tAfter Swap\n\n\tFirst Number = %d \n\tSecond Number = %d",num1,num2);
    getch();
}
