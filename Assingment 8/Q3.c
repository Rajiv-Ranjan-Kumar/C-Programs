//W.A.P Which Takes Day Number Of A Week And Display Unique Greeting Message For The Day.
main()
{
    int i , num , c ;
    for( ; ; )
    {
        system("cls");
        printf("Please Enter Day Number 1 To 7 of a Week And See The Unique Massage For The Day.");
        printf("\n\t 1. For Continue \n\t 2. For Exit\n\n\t Enter Your Choice : ");
        scanf("%d" , &c);
        if(c == 1 || c == 2)
        {
            if(c == 1)
            {
                printf("\t Enter Day Number : ");
                scanf("%d" , &num);
                switch(num)
                {
                case 1:
                    printf("\n\t Today Is Holi");
                    break;
                case 2:
                    printf("\n\tToday is Your GD Class Since 3 o'Clock");
                    break;
                case 3:
                    printf("\n\tToday is Your Mathematics Class Since 10 o'Clock");
                    break;
                case 4:
                    printf("\n\tToday is Dipawali");
                    break;
                case 5:
                    printf("\n\tToday is Your Company Interviwe");
                    break;
                case 6:
                    printf("\n\tToday is Sarswatipuja");
                    break;
                case 7:
                    printf("\n\tToday is Holiday");
                    break;
                default:
                    printf("\n\t Invalid Day Number");
                    break;
                }
            }
            else
                exit(0);
        }
        else
            printf("\n\t Invalid Choice");
            getch();
    }
}
