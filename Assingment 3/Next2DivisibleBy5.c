//W.A.P.To Check Whether A Given Number Is Even Or Odd
main()
    {
        int num , temp ;
        printf("Entern a Number For Check Number Is Even Or Odd : ");
        scanf("%d",&num);
        temp = num ;
        printf((num == (num / 2) * 2)?"\n%d Number Is Even" : "\n%d Number Is Odd",temp);
        getch();
    }
