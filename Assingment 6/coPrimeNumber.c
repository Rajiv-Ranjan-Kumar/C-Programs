//Write a Program To Check Whether Two Given Numbers Are Co-Prime Or Not .
main()
{
    int num1 , num2 , i , j , f = 0;
    printf("Enter Two Number To Check Co-Prime Number And Not : ");
    scanf("%d %d" , &num1 , &num2);
    if(num1 != num2)
    {
        if(num1 < 0 || num2 < 0)
            printf("Not Coding The -ve number\nPlease Enter The +ve Number");
        else
        {
            if(num1 > num2)
                j = num1 ;
            else
                j = num2 ;
            printf("Divider = ");

            for(i = 1 ; i < j ; i++)
            {
              if(num1 % i == 0 && num2 % i == 0)
              {
                   printf( "%d " , i );
                   f++ ;
              }

            }
            if (f == 1)
                printf("\n%d And %d Is Co-Prime Number" , num1 , num2);
            else
                printf("\n%d And %d Is Not Co-Prime Number" , num1 , num2);
        }
    }
    else
        printf("\n%d And %d Are Equal Number" , num1 , num2);
    getch();
}
