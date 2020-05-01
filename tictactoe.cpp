#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{

   int count=2;
   int z,exit=0;
   char a='1',b='2',c='3';
   char d='4',e='5',f='6';
   char g='7',h='8',i='9';
   int choice=0,moves=0;
   char so='O',sx='X';
   int pointso=0,pointsx=0;
   while(exit!=1)
   {   system("CLS");
       cout<<"\n\nP1 SCORE:"<<pointso<<"                      T I C   T A C   T O E                      "<<"P2 SCORE:"<<pointsx;
       cout<<"\n\n\n\t\t\t";
       printf("\n\t\t\t\t  %c  |  %c  |  %c  ",a,b,c);
       printf("\n\t\t\t\t     |     |      ");
       cout<<"\n\t\t\t\t"<<"______"<<"______"<<"______";
       printf("\n\t\t\t\t  %c  |  %c  |  %c  ",d,e,f);
       printf("\n\t\t\t\t     |     |      ");
       cout<<"\n\t\t\t\t"<<"______"<<"______"<<"______";
       printf("\n\t\t\t\t  %c  |  %c  |  %c  ",g,h,i);
       printf("\n\t\t\t\t     |     |      ");
        system("color 05");
       cout<<"\n\n\n\t\t\tPLAYER_1[0]\t\t\tPLAYER_2[X]\n\nENTER 10 TO EXIT\t\t\t\t\t\t\tPRESS 11 TO RETRY ";
        system("color 03");
       cout<<"\n\nENTER THE FIELD NUMBER : ";
       cin>>choice;
       switch(choice)
       {
       case 1:
           if(a!='X'&&a!='O')
           {

        if(count%2==0)
            a='O';
        else
            a='X';
           }
           else{
            printf("\n\nALREADY FILLED");
            count--;

           }
            break;

        case 2:
            if(b!='X'&&b!='O')
            {

         if(count%2==0)
            b='O';
         else
            b='X';
            }
             else{
            printf("\n\nALREADY FILLED");
            count--;
             }
            break;


        case 3:
            if(c!='X'&&c!='O')
           {
          if(count%2==0)
            c='O';
          else
            c='X';
           }
            else{
            printf("\n\nALREADY FILLED");
             count--;
               }

            break;
        case 4:
            if(d!='X'&&d!='O')
           {
         if(count%2==0)
            d='O';
         else
            d='X';
           }
            else{
            printf("\n\nALREADY FILLED");
             count--;
             }

            break;
        case 5:
             if(e!='X'&&e!='O')
           {
        if(count%2==0)
            e='O';
        else
            e='X';
           }
            else{
            printf("\n\nALREADY FILLED");
             count--;
             }

            break;
        case 6:
         if(f!='X'&&f!='O')
           {
          if(count%2==0)
            f='O';
          else
            f='X';
           }
            else{
            printf("\n\nALREADY FILLED");
            count--;
             }

             break;
        case 7:
             if(g!='X'&&g!='O')
           {
         if(count%2==0)
            g='O';
         else
            g='X';
           }
            else{
            printf("\n\nALREADY FILLED");
             count--;
             }
            break;
        case 8:
             if(h!='X'&&h!='O')
           {
         if(count%2==0)
            h='O';
         else
            h='X';
           }
            else{
            printf("\n\nALREADY FILLED");

              count--;
             }
            break;
        case 9:
             if(i!='X'&&i!='O')
           {
         if(count%2==0)
            i='O';
         else
            i='X';
           }
            else{
            printf("\n\nALREADY FILLED");
            count--;

             }
            break;
        case 10:
             exit=exit+1;
             break;
        case 11:
     a='1',b='2',c='3';
     d='4',e='5',f='6';
     g='7',h='8',i='9';
     choice=0,count=1;
     break;
        default:
            cout<<"Invalid output";
            count=count-1;
            break;
       }
    if(a==b&&b==c||d==e&&e==f||g==h&&h==i||a==d&&d==g||b==e&&e==h||c==f&&f==i||a==e&&e==i||c==e&&e==g)
    {
      if(count%2==0)
      {
         cout<<"\n\nPLAYER 1[0] WON, CONGRATULATIONS !!!\n\n";
         pointso++;
         moves=0;
         system("PAUSE");
      }
       else
      {
        cout<<"\n\nPLAYER 2[X] WON,CONGRATULATIONS !!!\n\n";
         pointsx++;
         moves=0;
         system("PAUSE");
      }
    }
    else
    {

        cout<<"\n\nMATCH DRAWN";
    }
     count=count+1;
      moves++;



    }


   }

