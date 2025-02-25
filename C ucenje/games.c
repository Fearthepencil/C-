//
//  games.c
//  C ucenje
//
//  Created by Pavle Stefanovic on 18.2.25..
//

#include "./libs/games.h"
#include <stdbool.h>

void random_guesser(int range){
    srand((unsigned)time(NULL));
    // Generate a random number between 0 and range
    int random_number = rand()%range;
    printf("Random number generated\n");
    int guess;
    for(int i = 5; i>0; i--){
        printf("Guess the number from 0 to %d\n",range);
        scanf("%d",&guess);
        if(guess==random_number){
            printf("Success!");
            return;
        }
        else if(guess<random_number){
            printf("My number is bigger\n");
        }
        else{
            printf("My number is smaller\n");
        }
        printf("%d tries remaining\n",i-1);
    }
    printf("Number was: %d\n",random_number);
}

void prime(int range){
    int primes[10000];
    int count = 0;
    bool fleg = false;
    for(int i=2; i<=range; i++){
        for(int j=0; j<count; j++){
            if(i%primes[j]!=0 && i>2){
                fleg = true;
            }
            else{
                fleg = false;
                break;
            }
        }
        if(fleg)primes[count++]=i;
        if(i<3){
            primes[count++]=i;
        }
    }
    
    for(int i=0; i<10000; i++){
        if(primes[i]>0){
            printf("%d ",primes[i]);
        }
        else break;
    }
}

void rainfall(void){
    double weather[5][12];
    for(int i=0; i<5; i++){
        for(int j=0; j<12; j++){
            scanf("%lf",&weather[i][j]);
        }
    }
    double avg_year = 0;
    //yearly averages
    //monthly averages
    for(int i=0; i<5; i++){
        double month = 0;
        double year = 0;
        for(int j=0; j<12; j++){
            month+=weather[i][j];
        }
        year+=month;
        printf("Monthly average is: %lf\n",month/12);
        printf("Year %d total is: %lf\n", i+1, year);
        avg_year+=month/12;
    }
    printf("Yearly average is: %lf\n",avg_year/5);
    
}
int play_move(int player,char board[3][3]){
    char move;
    int index;
    if(player==1){
        move = 'x';
    }
    else move = 'o';
    printf("Please play a move by typing a number 1-9\n");
    scanf("%d",&index);
    int index_row=0;
    int index_column=0;
    if(index<=3){
        index_column=index;
        index_row = 1;
    }
    else if(index>3 && index<=6){
        index_column = index-3;
        index_row = 2;
    }
    else if(index>6 && index<=9){
        index_column = index-6;
        index_row = 3;
    }
    else{
        printf("Invalid move");
        return -1;
    }
    
    if(board[index_row][index_column] =='e'){
        return index;
    }
    printf("Invalid move");
    return -1;
}

char check_board(char board[3][3]){
    int count = 0;
    char winner = 'e';
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            char winner = board[i][j];
            if(j==0){
                if(board[i][j]==board[i][j+1]==board[i][j+2]){
                    return winner;
                }
            }
        }
    }
    return 0;
}

void tic_tac_toe(void){
    int count = 0;
    int result = 0;
    char board[3][3] = {{'e','e','e'},
        {'e','e','e'},
        {'e','e','e'}};
    while(count<9){
        int move;
        if(count%2==0){
            move = play_move(1,board);
            board[move-1]='x';
        }
        else {
            move = play_move(2,board);
            board[move-1]='o';
        }
        if(move==-1) return;
        result = check_board(board);
    }
}


