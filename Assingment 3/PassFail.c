/*W.A.P. Which Takes Marks Of 5 Subject (Assume Maximum Marks Of Each Subject Is 100).Display Result As Pass Or Fail. Also Print Division Obtained If Candidate Has Passed The Exam.*/
main()
{
    int math  = 0 ;
    int phy   = 0 ;
    int chem  = 0 ;
    int hindi = 0 ;
    int eng   = 0 ;
    int num   = 0 ;
    int   x   = 0 ;
    int   c   = 0 ;
    char temp , y , z ;

    printf("Input The Marks Of 5 Subjects , While The Superintendent Marks Of Each Subject Is 100. If You Enter More Than 100 Marks In a Subject , The Marks Of That Subject Will Be Zero(0) ");
    printf("\n\nEnter The Marks Of Mathematics : ");
    scanf("%d" , &num) ;
    if (num <= 100)
        math = num ;
    else
    {
        printf("Have You Violated The Rule Hence Marks Zero (0) Of This Subject Please continue");
        getch();
    }

    printf("\nEnter The Marks Of Physics : ");
    scanf("%d" , &num) ;
    if (num <= 100)
        phy = num ;
    else
    {
        printf("Have You Violated The Rule Hence Marks Zero (0) Of This Subject Please continue");
        getch();
    }

    printf("\nEnter The Marks Of Chemistry : ");
    scanf("%d" , &num) ;
    if (num <= 100)
        chem = num ;
    else
    {
        printf("Have You Violated The Rule Hence Marks Zero (0) Of This Subject Please continue");
        getch();
    }

    printf("\nEnter The Marks Of Hindi : ");
    scanf("%d" , &num) ;
    if (num <= 100)
        hindi = num ;
    else
    {
        printf("Have You Violated The Rule Hence Marks Zero (0) Of This Subject Please continue");
        getch();
    }

    printf("\nEnter The Marks Of English : ");
    scanf("%d" , &num) ;
    if (num <= 100)
        eng = num ;
    else
    {
        printf("Have You Violated The Rule Hence Marks Zero (0) Of This Subject Please continue");
        getch();
    }


    printf("\nSubject\t\tMax-Marks\tPass-Marks\tObtained-Marks\tPass\\Fail\tTotal-Marks\tDivision");
    if(math >= 30)
    {
        temp = 'P';
        c ++ ;
    }
    else
        temp = 'F';
    printf("\nMathematics\t100\t\t30\t\t%d\t\t%c\t\t%d",math,temp,math);

    if(phy >= 30)
        {
            temp   = 'P';
            c++;
        }
    else
        temp = 'F';
    printf("\nPhysics\t\t100\t\t30\t\t%d\t\t%c\t\t%d",phy,temp,phy);

    if(chem >= 30)
    {
        temp   = 'P';
        c++;
    }
    else
        temp = 'F';
    printf("\nChemistry\t100\t\t30\t\t%d\t\t%c\t\t%d",chem,temp,chem);

    if(hindi >= 30)
    {
         temp = 'P';
         c++;
    }
    else
        temp = 'F';
    printf("\nHindi\t\t100\t\t30\t\t%d\t\t%c\t\t%d",hindi,temp,hindi);

    if(eng >= 30)
    {
        temp = 'P';
        c++;
    }
    else
        temp = 'F';



     num = math + phy + chem + hindi + eng ;
     if(c == 5)
     {
          if(num >=300)
          {
              x = 1 ;
              y = 's' ;
              z = 't' ;
          }

          if(num >= 225 && num < 300)
          {
               x = 2 ;
               y = 'n' ;
               z = 'd' ;
          }
          if(num >= 150 && num < 225)
          {
               x = 3 ;
               y = 'r' ;
               z = 'd' ;
          }



      printf("\nEnglish\t\t100\t\t30\t\t%d\t\t%c\t\t%d\t\t%d%c%c/Pass",eng,temp,eng,x,y,z);
     }
     else
     {
         //y = 'F';
         //z = 'L';
         printf("\nEnglish\t\t100\t\t30\t\t%d\t\t%c\t\t%d\t\tFail",eng,temp,eng);
     }



    printf("\n---------------------------------------------------------------------------------------------------------");
    printf("\n\t\t500\t\t150\t\t\t\t\t\t%d",num);

    getch();
}
