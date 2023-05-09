//Write A Program To Calculate Sum Of Cubes Of N Natural Numbers.
main()
{
    /*int i = 1 , sum = 0 , num ;
    printf("Enter a Number To Calculate Sum Of Cube : ");
    scanf("%d",&num);
    do
    {
        sum = sum + i * i * i ;
        i++ ;
    }while(i <= num);
    printf("Sum Of Cubes = %d" , sum);
    getch();*/

    int i , sum = 0 , num ;
    printf("Enter a Number To Calculate Sum Of Cube : ");
    scanf("%d",&num);
    for(i = 1 ; i <= num ; i++)
    {
        sum = sum + i * i * i ;
    }
    printf("Sum Of Cubes = %d" , sum);
    getch();
}
