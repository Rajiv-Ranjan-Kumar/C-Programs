//For a Sum Of 500 Or More Than 500 Get The Amount For User Input And W.A.P. To Print How Many People Have Completed The Amount .
main()
{

    int i = 1 , a , sum = 0 ;
    while(1)
    {
        printf("Enter Amount %d People :",i);
        scanf("%d",&a);
        sum = sum + a ;
        if(sum >= 500)
            break;
        i++;
    }
    printf("More Than 500 Amount Take Number Of People = %d And Amount = %d " , i , sum);
    getch();

}
