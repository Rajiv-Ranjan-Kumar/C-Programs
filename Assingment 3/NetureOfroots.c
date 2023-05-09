//W.A.P To Check Nature Of Roots Of a Given Quadratic Equation .
main()
{
    int a = 1 , b , c , d , num ;
    printf("Let aX^2 + bX + c = 0 Is a Quadratic Equation , Than Enter The\nValue Of a , b And c To Find Nature Of Roots . When a != 0 ");
    printf("\n\nEnter The Value Of a : ");
    scanf("%d" , &num);
    if (num != 0)
        a = num ;
    else
        printf("a = 1 By Default  If (a != 0)");

    printf("\n\nEnter The Value Of b : ");
    scanf("%d" , &num);
    b = num ;
    printf("\nEnter The Value Of c : ");
    scanf("%d" , &num);
    c = num ;

    d = b * b - 4 * a * c;
    printf("\n\tDiscriminant = %d",d);
    if(d > 0)
        printf("\n\nTwo distinct real roots");
    if(d == 0)
        printf("\n\nTwo Equal Roots");
    if(d < 0)
        printf("\n\nNot Real Roots");
    getch();
}
