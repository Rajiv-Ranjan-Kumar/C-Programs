//Write a Program To Check Whether An Year Is Leap Year Or Not
main()
{
    int year , temp ;
    printf("Enter The Year For Check Leap Year Or Not :- ");
    scanf("%d" , &year);
    temp = year ;
    printf((year % 4 == 0 || year % 400 == 0)?"\n%d Leap Year" : "\n%d Not Leap Year" , temp);
    getch();
}
