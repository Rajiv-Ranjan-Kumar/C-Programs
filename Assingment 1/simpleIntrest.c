main()
{
    int si,p,r,t;
    printf("Enter Principal Amount :-");
    scanf("%d",&p);
    printf("Enter Rate :-");
    scanf("%d",&r);
    printf("Enter Time :-");
    scanf("%d",&t);
    si = (p*t*r)/100;
    printf("Simple Intrest = %d",si);
    getch();
    }
