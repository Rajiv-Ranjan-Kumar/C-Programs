//W.A.P. To Check Whether a Given Number Is Positive , Negative And Zero.
main()
{
    int num ;
    printf("Enter a Number To Check Number Is Positive , Negative And Zero :- ");
    scanf("%d",&num);
    if(num > 0)
    {
        printf("%d Number Is Positive",num);
    }
    if(num < 0)
    {
        printf("%d Number Is Negative",num);
    }
    if(num == 0)
    {
        printf("Number Is %d ",num);
    }
    getch();
}
