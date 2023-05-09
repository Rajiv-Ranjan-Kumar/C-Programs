//W.A.P To Calculate Sum Of Square Of First N Natural Numbers.
main()
{
    /*int i = 1 , sum = 0 , num ;
    printf("Enter a Number : ");
    scanf("%d" , &num);
    do
    {
        sum = sum + ( i * i );
        i++ ;
    }while(i <= num);
    printf("Sum Of Square Of N Natural Number = %d" , sum);*/

    int i, sum = 0 ,num ;
    printf("Enter a Number : ");
    scanf("%d" , &num);
    for(i = 1 ; i <= num ; i++)
    {
        sum = sum + i * i ;
    }
    printf("Sum Of Square of First N Natural Number = %d ", sum);
    getch();

}
