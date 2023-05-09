//W.A.P. To Check Whether a Given Number Is Positive , Negative And Zero.
main()
{
    int num ;
    printf("Enter a Number To Check Number Is Positive , Negative And Zero :- ");
    scanf("%d",&num);
    if(num != 0)
    {
        printf((num > 0)?"%d Number Is Positive" : "%d Number Is Negative",num);
    }
    else
    {
        printf("Number Is %d",num);
    }
    getch();
}
