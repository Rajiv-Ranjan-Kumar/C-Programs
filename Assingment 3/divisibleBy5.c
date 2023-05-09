/*Write a Program To Check Whether a Given Number Is Divisible By 5.*/
main()
{
    int num , temp ;
    printf("Enter a Number :- ");
    scanf("%d",&num);
    temp = num ;
    num = num % 5 ;
    (num == 0)?printf("\n\n%d Divisible By 5" , temp) : printf("\n\n%d Not Divisible By 5" , temp);
    getch();
}
