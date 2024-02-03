#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char user, computer, again;
int num, scorecomputer, scoreuser;

int uservalue() {
    printf("\nEnter your value: ");
    scanf(" %c", &user);
    return 0;
}

int randomnum() {
    srand(time(NULL));
    num = rand() % 100;
    // printf("%d\n", num);
    return num;
}

int playagain();

int maingame(){
    num = randomnum();
    if (num >= 0 && num <=34){
        computer = 'S';
    }else if(num > 34 && num <=65){
        computer = 'R';
    }else{
        computer = 'P';
    }
    // printf("\t%c\n", computer);
    
    uservalue();
    if (computer == 'S' && user == 'P'){
        printf("\nComputer won!");
        scorecomputer++;
    }else if(computer == 'S' && user == 'R'){
        printf("\nUser won!");
        scoreuser++;
    }else if(computer == 'P' && user == 'S'){
        printf("\nUser Won!");
        scoreuser++;
    }else if(computer == 'P' && user == 'R'){
        printf("\nComputer Won!");
        scorecomputer++;
    }else if(computer == 'R' && user == 'S'){
        printf("\nComputer Won!");
        scorecomputer++;
    }else if(computer == 'R' && user == 'P'){
        printf("\nUser Won!");
        scoreuser++;
    }else if (computer == user) {
        printf("It's a draw, play again\n");
    } else {
        printf("Bad input!\n");
    }
    
    printf(" ");
    printf("\n====================");
    printf("\n\tYour score: %d", scoreuser);
    printf("\nComputer score: %d\n", scorecomputer);
    printf("====================\n");

    playagain();
    return 0;
    
}

int playagain(){
    printf("\nDo you want to play again? ");
    scanf(" %c", &again);
    
    if (again == 'Y' || again == 'y'){
        maingame();
    }else{
        printf("It was fun playing with you!👋\n");
    }
    return 0;
}

int main(){
    
    printf("_^_^_\n");
    printf("(O,O)\n");
    printf("(/_\\)\n");
    printf("-^-^---HDz---(RPS Game V1.0)\n");
    printf("<----------------------------------------------------->\n");
    printf("| Type R for Rock🪨, P for Paper📃 and S or Scissor✂️ |\n");
    printf("<----------------------------------------------------->\n");
    
    maingame();
    
    if (scoreuser > scorecomputer){
        printf("\nUser Won!🙌");
    }else if(scoreuser == scorecomputer){
        printf("\nIts a tie");
    }else{
        printf("\nComputer Won🤖");
    }
    
    printf("\n==================\n");
    printf("||\tFinal Score\t||");
    printf("\n==================");
    printf("\n||\tUser: %d \t||\n", scoreuser);
    printf("||\tComputer: %d ||\n", scorecomputer);
    printf("==================\n");
}