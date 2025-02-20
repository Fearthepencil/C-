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
