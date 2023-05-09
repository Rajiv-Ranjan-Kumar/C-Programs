//W.A.P. To Print First 10 Even Natural Numbers .
main()
{
    //CASE 1 : //

    /*int i = 1 , j = 1 ;
    while (j <= 10)
    {
        if(i % 2 == 0)
        {
            printf("\n%d" , i);
            j++ ;
        }
        i++ ;
    }*/


    //CASE 2 : //

    /*int i = 1 ;
    while(i != 11)
        printf("%d\n",2*i++);
        */

    //CASE 3 : //

    int i = 1 ;
    while (i <= 10)
        printf("\n%d" , 2*i++);
    getch();
}
