/*Write a Menu Drive Program With Following Options.
    1. Addition
    2. Subtraction
    3. Multiplication
    4. Division
    5. Exit
*/

main()
{
    int c , num1 , num2 ;
    while(1)
    {
        system("cls");
        printf("Take Two Number And Following Operations.");
        printf("\n\t1. Addition \n\t2. Subtraction \n\t3. Multiplication \n\t4. Division \n\t5. Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d" ,&c);
        switch(c)
        {
        case 1:
            printf("\nEnter First Number : ");
            scanf("%d",&num1);
            printf("Enter Second Number : ");
            scanf("%d",&num2);
            printf("\nSum Of Two Number = %d",num1+num2);
            break;
        case 2:
            printf("\nEnter First Number : ");
            scanf("%d",&num1);
            printf("Enter Second Number : ");
            scanf("%d",&num2);
            printf("\nSubtraction Of Two Number = %d",num1-num2);
            break;
        case 3:
            printf("\nEnter First Number : ");
            scanf("%d",&num1);
            printf("Enter Second Number : ");
            scanf("%d",&num2);
            printf("\nMultiplication Of Two Number = %d",num1*num2);
            break;
        case 4:
            printf("\nEnter First Number : ");
            scanf("%d",&num1);
            printf("Enter Second Number : ");
            scanf("%d",&num2);
            if(num1<num2)
            {
                    num1 = num1 + num2;
                    num2 = num1 - num2;
                    num1 = num1 - num2;
            }
            float a = num1 ;
            float b = num2 ;
            printf("\nDivision Of Two Number = %f",a/b);
            break;
        case 5:
            exit(0);
        default:
            printf("\tIncorrect Choice");
        }
        getch();
    }
}
