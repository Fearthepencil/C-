//
//  games.h
//  C ucenje
//
//  Created by Pavle Stefanovic on 18.2.25..
//

#ifndef games_h
#define games_h

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void random_guesser(int range);
void prime(int range);
void rainfall(void);
void draw_board(char board[9]);
int play_move(int player,char board[9]);
char check_board(char board[9]);
void tic_tac_toe(void);
#endif /* games_h */
