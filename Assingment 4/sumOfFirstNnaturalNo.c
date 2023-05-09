//W.A.P To Calculate Sum Of First N Natural Numbers .
main()
{
    int i = 1 , num , sum = 0 ;
    printf("Enter a Number : ");
    scanf("%d" , &num);
    while(i <= num)
    {
        sum = sum + i ;
        i++;
    }
    printf("Sum Of N Natural Numbers = %d ", sum);
    getch();
}
