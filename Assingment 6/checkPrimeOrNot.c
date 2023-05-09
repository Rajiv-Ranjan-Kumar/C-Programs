//W.A.P. To Check Whether a Given Number Is Prime Or Not .
main()
{
    int i ,c=0, num ;
    printf("Enter a Number For Check Number Is Prime Or Not : ");
    scanf("%d" , & num);
    for(i = 2 ; i < num ; i++)
    {
        if(num % i == 0)
        {
            c++ ;
            break ;
        }
    }
    if(c == 1)
        printf("%d Is Not Prime Number" , num);
    else
        printf("%d Is Prime Number" , num);
    getch();
}
