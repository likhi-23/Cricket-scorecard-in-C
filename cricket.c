#include<stdio.h>
#include<stdlib.h>

struct batsman
 {
   char name[25];
   int runs,score,balls,toruns,tobal,ones,twos,threes,fours,sixes;
   int max_six,max_run,max_four;
   float str;

 }pl1[100],pl3;


struct bowler
 {
   char name[25];
   int runsgv,wkttkn,overs,totwick;
   int max_w;
   float econ;
 }pl2[100],pl4;


int main()
{
 int plno,choice;
  int i,n,m,a,b,c,d;
  printf("Enter the Batsman detail:\n");
  printf("Enter the number of batsman:\n");
  scanf("%d",&m);
  for(i=0;i<m;i++)
   {

       printf("Enter name of batsman%d:\n",i+1);
       scanf("%s",pl1[i].name); 


       printf("Enter the number of ones scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].ones);


       printf("Enter the number of twos scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].twos);


       printf("Enter the number of threes scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].threes);


       printf("Enter the number of fours scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].fours);


       printf("Enter the number of sixes scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].sixes);


       printf("Enter the balls played by the player%d:\n",i+1);
       scanf("%d",&pl1[i].balls);
   }



   printf("\nEnter the bowlers details:\n");

   printf("Enter the number of bowlers:\n");

   scanf("%d",&n);


   for(i=0;i<n;i++)
   {

       printf("\nEnter name of bowler%d:",i+1);
       scanf("%s",pl2[i].name);


       printf("Enter the runs given by the bowler%d:\n ",i+1);
       scanf("%d",&pl2[i].runsgv);


       printf("Enter the overs bowled by the bowler%d:\n",i+1);
       scanf("%d",&pl2[i].overs);


       printf("Enter the wickets taken by the bowler%d\n",i+1);
       scanf("%d",&pl2[i].wkttkn);

   }

   printf("Thank you all details are recorded\n");


   do
    {

       printf("Enter the choice:\n 1)Batsman detail:\n 2)Bowlers detail:\n 3)Match summary:\n 4)Record:\n 5)Exit\n\n\n ");
       scanf("%d",&choice);

     switch(choice)
      {

        case 1:
            

              printf("                       Batsman Details\n");
              printf("===========================================================================\n");
              printf(" Batsman        runs           balls        fours       sixes         sr   \n");
              printf("===========================================================================\n");

            for(i=0;i<m;i++){
              pl1[i].runs=(1*pl1[i].ones)+(2*pl1[i].twos)+(3*pl1[i].threes)+(4*pl1[i].fours)+(6*pl1[i].sixes);
              pl1[i].str=(pl1[i].runs*100.00)/pl1[i].balls;
              printf(" %-15s %-14d %-13d %-11d %-11d %-9.2f\n\n",pl1[i].name,pl1[i].runs,pl1[i].balls,pl1[i].fours,pl1[i].sixes,pl1[i].str);

              }break;


        case 2:
              printf("                         Bowler Details\n");
              printf("=================================================================\n");
              printf(" Bowler        overs           runs        wicket       economy\n");
              printf("=================================================================\n");

               for(i=0;i<n;i++)
               {   pl2[i].econ=pl2[i].runsgv/pl2[i].overs;
                   printf(" %-15s %-14d %-13d %-11d %-11.2f\n\n",pl2[i].name,pl2[i].overs,pl2[i].runsgv,pl2[i].wkttkn,pl2[i].econ);
               }

             break;

        case 3:
              printf("                     MATCH SUMMARY\n\n");
              printf("                     Batsman Details\n");
              printf("==========================================================================\n");
              printf(" Batsman        runs           balls        fours       sixes         sr   \n");
              printf("==========================================================================\n\n");
              

              for(i=0;i<m;i++)
                {
                    pl1[i].runs=(1*pl1[i].ones)+(2*pl1[i].twos)+(3*pl1[i].threes)+(4*pl1[i].fours)+(6*pl1[i].sixes);
                    pl3.toruns+=pl1[i].runs;
                    pl1[i].str=(pl1[i].runs*100.00)/pl1[i].balls;
                    printf(" %-15s %-14d %-13d %-11d %-11d %-9.2f\n\n",pl1[i].name,pl1[i].runs,pl1[i].balls,pl1[i].fours,pl1[i].sixes,pl1[i].str);
                }
                printf("TOTAL RUNS:%d\n\n",pl3.toruns);
              printf("\n\n");
              printf("                     Bowler Details\n");
              printf("=================================================================\n");
              printf(" Bowler        overs           runs        wicket       economy\n");
              printf("=================================================================\n");
              

               for(i=0;i<n;i++)
               {   pl2[i].econ=pl2[i].runsgv/pl2[i].overs;
                   printf(" %-15s %-14d %-13d %-11d %-11.2f\n\n\n",pl2[i].name,pl2[i].overs,pl2[i].runsgv,pl2[i].wkttkn,pl2[i].econ);
                   pl2->totwick+=pl2[i].wkttkn;
               }
                printf("TOTAL WICKTES:%d\n\n",pl2->totwick);

               break;

        case 4: pl3.max_run=0,pl4.max_w=0,pl3.max_four=0,pl3.max_six=0;
       
                for(i=0;i<m;i++)
                  { 
                     pl1[i].runs=(1*pl1[i].ones)+(2*pl1[i].twos)+(3*pl1[i].threes)+(4*pl1[i].fours)+(6*pl1[i].sixes);
                     if(pl3.max_run<pl1[i].runs)
                        {
                          pl3.max_run=pl1[i].runs;
                            a=i;
                        }
                 
                     if(pl3.max_six<pl1[i].sixes)
                       {
                        pl3.max_six=pl1[i].sixes;
                        b=i;
                       }
                 
                     if(pl3.max_four<pl1[i].fours)
                       {
                        pl3.max_four=pl1[i].fours;
                        c=i;
                       }
 
                     if(pl4.max_w<pl2[i].wkttkn)
                      {
                      pl4.max_w=pl2[i].wkttkn;
                      d=i;
                      }
                  }
              printf("\t\t\tHighest runs %d is scored by the batsman %s \n\n",pl3.max_run,pl1[a].name);
   
              printf("\t\t\tMaximum fours %d is scored by the batsman %s \n\n",pl3.max_four,pl1[b].name);

              printf("\t\t\tMaximum sixes %d is scored by the batsman %s \n\n",pl3.max_six,pl1[c].name);
 
             printf("\t\t\tMaximum wickets %d is taken by the bowler %s \n\n",pl4.max_w,pl2[d].name);

             break;



        case 5:
            exit(1);

        default:
             printf("Enter the correct choice\n");
             break;

      }

    }while(choice!=5);
   return 0;
} 