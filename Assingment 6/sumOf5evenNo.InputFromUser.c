//W.A.P. TO Print Sum Of Five Even Number , The Number Is Input From User.
main()
{
    int sum = 0 , c = 0 , num , i ;
    for( i = 1; ; i++ )
    {
        printf("Enter %d Number : " , i);
        scanf("%d" , &num);
        if(num % 2 != 0)
            continue;
        sum = sum + num ;
        c++;
        if(c == 5)
            break;
    }
    printf("Sum Of 5 Even Number = %d" , sum);
    getch();
}
