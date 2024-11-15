/*
Name:Arun Cyriac
Date:20aug2024

Description:
Rock Paper Scissor (which is also called Stone Paper Scissor) is a hand game and played between two people,
 in which each player simultaneously forms one of three shapes. The winner of the game is decided as
 per the below rules:

Rock vs Paper -> Paper wins.
Rock vs Scissor -> Rock wins.
Paper vs Scissor -> Scissor wins.
In this game, the user will be asked to make choice and according to the choice of user and computer
and then the result will be displayed along with the choices of both computer and use*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int pnum;  //player number
    int n=0;   //no alteration
    char p1,p2,op; //p1 and p1 will contain values r,s,p for rock,scissors,papper respectively
                   //for player 1 and 2.op is for yes or no
    do
    {
        do
        {
            system("clear");
            n = 0;
            p1 = '0';
            p2 = '0';
            do
            {
                system("clear");
                printf("Enter the player numner");
                scanf("%d",&pnum);         //inputing the player number
                if(pnum == 1)
                {
                    printf("Enter (R/P/S): ");
                    scanf(" %c",&p1);
                }
                else if(pnum == 2)
                {
                    printf("Enter (R/P/S): ");
                    scanf(" %c",&p2);  
                }
                else
                {
                    printf("Error: Player not found!!\n");
                    break;
                }
                n = n + 1;
            }while(n < 2);
            if(p1 == 'R' || p1 == 'r')
            {
                if(p2 == 'p' || p2 == 'P')
                printf("Player 2 win\n");
                else if (p2 == 'R' || p2 == 'r')
                printf("Draw\n");
                else if(p2 == 's'|| p2 == 'S')
                printf("Player 1 win\n");
                else
                {
                    printf("Error: Invalid input by player 2\n");
                    break;
                }
                
            }
            else if(p1 == 's' || p1 == 'S')
            {
                if(p2 == 'p' || p2 == 'P')
                printf("Player 1 win\n");
                else if (p2 == 'R' || p2 == 'r')
                printf("Player 2 win\n");
                else if(p2 == 's'|| p2 == 'S')
                printf("Draw\n");
                else
                {
                    printf("Error: Invalid input by player 2\n");
                    break;
                }
            }
            else if(p1 == 'p' || p1 == 'P')
            {
                if(p2 == 'p' || p2 == 'P')
                printf("Draw\n");
                else if (p2 == 'R' || p2 == 'r')
                printf("Player 1 win\n");
                else if(p2 == 's'|| p2 == 'S')
                printf("Player 2 win\n");
                else
                {
                    printf("Error: Invalid input by player 2\n");
                }
            }
            else
            {
                printf("Error: invalid input by player 1\n");

            }
            printf("Do you want play new Round(Y/N)\n");
            scanf(" %c",&op);

        } while (op == 'Y' || op == 'y');
        printf("Do you want to quit(Y/N)\n");
        scanf(" %c",&op);
        
    } while (op == 'N' || op == 'n');
                    

}
