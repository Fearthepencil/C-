//
//  games.c
//  C ucenje
//
//  Created by Pavle Stefanovic on 18.2.25..
//

#include "./libs/games.h"

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
