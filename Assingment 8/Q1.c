//W.A.P Which Takes Month Number As An Input And Display Number of Day's In That Month.
main()
{
    int num , c ;
    while(1)
    {
        system("cls");
        printf("Take The Month Number And Then Display Total Number Of Day's");
        printf("\n\n1. Continue \n2. Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d" , &c);
        if(c == 1)
        {
            system("cls");
            printf("Enter Month Number : ");
            scanf("%d" , &num);
            switch(num)
            {
            case 1:
                printf("Total Number Of Day's = 31  January");
                break;
            case 2:
                printf("Total Number Of Day's = 28 / 29 February");
                break;
            case 3:
                printf("Total Number Of Day's = 31  March");
                break;
            case 4:
                printf("Total Number Of Day's = 30  April");
                break;
            case 5:
                printf("Total Number Of Day's = 31  May");
                break;
            case 6:
                printf("Total Number Of Day's = 30  Jun");
                break;
            case 7:
                printf("Total Number Of Day's = 31  July");
                break;
            case 8:
                printf("Total Number Of Day's = 31  August");
                break;
            case 9:
                printf("Total Number Of Day's = 30  September");
                break;
            case 10:
                printf("Total Number Of Day's = 31  October");
                break;
            case 11:
                printf("Total Number Of Day's = 30  Number");
                break;
            case 12:
                printf("Total Number Of Day's = 31  December");
                break;
            default:
                printf("Month Number Is Incorrect");
            }
            getch();
        }
        else if(c == 2)
            exit (0);
        else
            printf("\n invalid Choice");
    }
}
