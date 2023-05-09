/* Write a Menu Drive Program With Following Options:
a. Check Whether a Given Set Of Three Numbers Are Lengths Of an Isosceles Triangle or Not
b. Check Whether a Given Set Of Three Numbers Are Lengths Of Right Angled Triangle or Not
c. Check Whether a Given Set Of Three Numbers Are Equilateral Triangle or Not
d. Exit */
main()
{
    int c , num1 ,num2 ,num3 ;
    while(1)
    {
         system("cls");
         printf("\tChose The Following Options\n");
         printf("1. Check Whether a Given Set Of Three Numbers Are Lengths Of an Isosceles Triangle or Not\n");
         printf("2. Check Whether a Given Set Of Three Numbers Are Lengths Of Right Angled Triangle or Not\n");
         printf("3. Check Whether a Given Set Of Three Numbers Are Equilateral Triangle or Not\n");
         printf("4. Exit");
         printf("\nEnter Your Choice : ");
         scanf("%d" , &c);
         switch(c)
         {
         case 1:
            printf("Enter Three Number : ");
            scanf("%d%d%d",&num1,&num2,&num3);
            if(num1 == num2 || num2 == num3 || num1 == num3)
                printf("\n\tIsosceles Triangle");
            else
                printf("\n\tNot Isosceles Triangle");
            break;

         case 2:
            printf("Enter Three Number : ");
            scanf("%d%d%d",&num1,&num2,&num3);
            if(num1 * num1 == (num2 * num2 + num3 * num3) || num2 * num2 == (num1 * num1 + num3 * num3)|| num3 * num3 == (num1 * num1 + num2 * num2))
                printf("\n\tRight Angel Triangle");
            else
                printf("\n\tNot Right Angle Triangle");
            break;

         case 3:
            printf("Enter Three Number : ");
            scanf("%d%d%d",&num1,&num2,&num3);
            if(num1 == num2 && num2 == num3)
                printf("\n\tEquilateral Triangle");
            else
                printf("\n\tNot Equilateral Triangle");
            break;

         case 4:
            exit(0);

         default:
            printf("\nInvalid Choice");
            break;
         }
    getch();
    }
}
