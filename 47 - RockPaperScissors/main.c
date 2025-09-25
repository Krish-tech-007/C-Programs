#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROCK 1
#define PAPER 2
#define SCISSOR 3
//Anything we write after #define is called a macros, we are effectively telling the compiler to replace all occurrences of the words with their corresponding values
//This ensure readability
#define PLAYER1_WIN 1
#define PLAYER2_WIN 2
#define DRAW 0

int rock_paper_scissor(int player1, int player2){
    if     (player1 == ROCK && player2 == PAPER)
        return PLAYER2_WIN;
    else if(player1 == ROCK && player2 == SCISSOR)
        return PLAYER1_WIN;
    else if(player1 == PAPER && player2 == ROCK)
        return PLAYER1_WIN;
    else if(player1 == PAPER && player2 == SCISSOR)
        return PLAYER2_WIN;
    else if(player1 == SCISSOR && player2 == ROCK)
        return PLAYER2_WIN;
    else if(player1 == SCISSOR && player2 == PAPER)
        return PLAYER1_WIN;
    else
        return DRAW;


}
int main()
{
    srand(time(NULL));
    int userChoice, computerChoice, userScore = 0, computerScore = 0;
    while(userChoice != 4){
        printf("Enter\n1.Rock\n2.Paper\n3.Scissor\n4.Exit\n");
        scanf("%d", &userChoice);
        if(userChoice == 4)
            break;
        computerChoice = (rand() % 3) + 1;
        if(rock_paper_scissor(userChoice, computerChoice) == PLAYER1_WIN){
            printf("User wins, computer chose %d\n", computerChoice);
            userScore++;
        }
        else if((rock_paper_scissor(userChoice, computerChoice) == PLAYER2_WIN)){
            printf("Computer wins, computer chose %d\n", computerChoice);
            computerScore++;
        }
        else
            printf("Draw, computer chose %d\n", computerChoice);
    }
    printf("User Score: %d, Computer Score: %d\n", userScore, computerScore);
    (userScore>computerScore) ? printf("User wins\n") : (userScore == computerScore ? printf("Draw\n") : printf("Computer wins\n"));
    return 0;
}
