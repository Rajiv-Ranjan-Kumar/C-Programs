/*Write a Program To Check Whether a Given Number Is Divisible By 5.*/
main()
{
    int num ;
    printf("Enter a Number For Check Divisible By 5 :- ");
    scanf("%d",&num);
    if(num % 10 == 0 || num % 10 == 5)
        {
        printf("\n%d Divisible By 5",num);
        }
    else
        {
        printf("\n%d Not Divisible By 5",num);
        }
    getch();
}
