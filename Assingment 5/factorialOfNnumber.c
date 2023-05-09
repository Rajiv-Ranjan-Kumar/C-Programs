//W.A.P. To Calculate Factorial Of a Number .
main()
{
    int num , i = 1 ;
    printf("Enter a Number : ");
    scanf("%d" , & num);
    printf("%d! = %d" , num , num);
    do
    {
        i = i * num ;
        num-- ;
        printf("*%d" , num);
    }while(num > 1);
    printf(" = %d" , i);
    getch();
}
