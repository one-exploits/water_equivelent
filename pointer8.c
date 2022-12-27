#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Simple betting game
// Jack Queen King, computer shuffles 3 cards
// guess position of the queen
// win=3*bet
// lose= lose bet
// %100 initially
int cash=100;
void play(int bet)
{
    char C[3]={'J', 'Q', 'K'};
    printf("shuffling.....");
    srand(time(NULL));
    for(int i=0; i<5;i++)
    {
        int x = rand() %3;
        int y = rand() %3;
        int temp=C[x]; 
        C[x]=C[y]; 
        C[y]=temp;//swaps char at pos x and y
    }
    int guess;
    printf("Enter guess for queen, 1,2,3");
    scanf("%d", &guess);
    if(C[guess-1]=='Q')
    {
        cash=cash+bet*3;
        printf("Won, result-%c%c%c Total cash= %d", C[0],C[1],C[2],cash);
    }
    else
    {
        cash=cash-bet;
        printf("Lost, result-%c%c%c Total cash= %d", C[0],C[1],C[2],cash);
    }

}
int main()
{
    int bet;
    printf("\nWelcome to guessing game\n");
    printf("total cash=$%d\n", cash);
    while(cash>0)
    {
        printf("Whats your bet?? $");
        scanf("%d", &bet);
        if(bet==0 || bet >cash)break;
        play(bet);
    }
    printf("*************************/n");
}