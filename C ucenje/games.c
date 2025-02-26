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
int play_move(int player,char board[9]){
    char move;
    int index;
    if(player==1){
        move = 'x';
    }
    else move = 'o';
    printf("Please play a move by typing a number 1-9\n");
    scanf("%d",&index);
    if(index>=1 && index<=9) printf("Playing move...\n");
    else{
        printf("Invalid move");
        return -1;
    }
    if(board[index-1] =='e'){
        return index;
    }
    printf("Invalid move");
    return -1;
}

char check_board(char board[9]){
    for(int i=0; i<9; i++){
        if(board[i]!='e'){
            if(i==0 || i==3 || i==6){
                if(board[i]==board[i+1] && board[i]==board[i+2]){
                    return board[i];
                }
            }
            if(i==0 || i==1 || i==2){
                if(board[i]==board[i+3] && board[i]==board[i+6]){
                    return board[i];
                }
            }
            if(i==0){
                if(board[i]==board[i+4] && board[i]==board[i+8]){
                    return board[i];
                }
            }
            if(i==2){
                if(board[i]==board[i+2] && board[i]==board[i+4]){
                    return board[i];
                }
            }
        }
    }
    return 'e';
}

void draw_board(char board[9]){
    for(int i=0; i<9; i++){
        if(i<3){
            printf(" %c ",board[i]);
            continue;
        }
        if(i==3) printf("\n");
        if(i<6){
            printf(" %c ",board[i]);
            continue;
        }
        if(i==6) printf("\n");
        if(i<9){
            printf(" %c ",board[i]);
            continue;
        }
    }
    printf("\n");
}

void tic_tac_toe(void){
    int count = 0;
    int result = 0;
    char board[9] = {'e','e','e',
        'e','e','e',
        'e','e','e'};
    draw_board(board);
    while(count<9){
        int move=-1;
        if(count%2==0){
            move = play_move(1,board);
            if(move==-1) continue;
            board[move-1]='x';
            draw_board(board);
        }
        else {
            move = play_move(2,board);
            if(move==-1) continue;
            board[move-1]='o';
            draw_board(board);
        }
        result = check_board(board);
        if(result=='x'){
            printf("Player 1 WON!\n");
            return;
        }
        if(result=='o'){
            printf("Player 2 WON!\n");
            return;
        }
        count++;
    }
}


