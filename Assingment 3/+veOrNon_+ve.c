//Write a Program To Check Whether a Given Numbers is Positive Or Non-positive.
main()
{
    int num ;
    printf("Enter a Number :- ");
    scanf("%d",&num);
    if(num != 0)
        {
        (num > 0)? printf("\n\n%d Is Positive",num ):printf("\n\n%d Is Non-Positive",num);
        }
    else
        {
        printf("\nThe Number Is Not Positive And Non-Positive");
        }
    getch();
}
