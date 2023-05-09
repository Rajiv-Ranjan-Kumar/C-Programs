/*Write a Program To Check Whether a Given Number Is Even Or Odd.*/

main()
{
    int num , temp ;
    printf ("Enter a Number :- ");
    scanf ("%d" , &num);
    temp = num ;
    (num % 2 == 0)?printf("\n\n%d Is Even" , temp) :printf("\n\n%d Is Odd" , temp);
    getch();
}
