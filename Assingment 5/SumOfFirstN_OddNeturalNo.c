//W. A. P. To Calculate Sum Of First N Odd Natural Numbers.
main()
{
    /*int i = 1 ,sum = 0 , num ;
    printf("Enter a Number To Calculate Sum Of N Odd Natural Numbers : ");
    scanf("%d" , &num);
    do
    {
        if(i % 2 != 0)
            sum = sum + i ;
        i++;
    }while(i <= num);
    printf("Sum Of N Odd Natural Numbers = %d" , sum);*/

    int i , sum = 0 ,num ;
    printf("Enter a Number To Calculate Sum Of N Odd Natural Numbers :");
    scanf("%d" , &num);
    for(i = 1 ; i <= num ; i++ )
    {
        sum = sum + i++;
    }
    printf("Sum Of Cubes = %d" , sum);
    getch();
}
