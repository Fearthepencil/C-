//
//  main2.c
//  C ucenje
//
//  Created by Pavle Stefanovic on 16.2.25..
//
#include <stdio.h>
#include "./libs/header.h"
#define OVERTIME 1.5
#define BASIC 12.0
#define FIRST 15.0 //300
#define NEXT 20.0 //150
#define LAST 25.0 //rest

void pay(double hours){
    double sum = 0;
    double taxes = 0;
    if(hours<0){
        printf("Ne mozes negativno da radis - neradnice");
        return;
    }
    if(hours>=40){
        sum+=BASIC*40;
        sum+=(hours-40)*OVERTIME*BASIC;
        printf("The gross pay earned is: %lf",sum);
    }
    else{
        sum = BASIC*hours;
        printf("The gross pay earned is: %lf",BASIC*hours);
    }
    if(sum<=300){
        taxes+=sum*FIRST/100;
        printf("The taxes are %lf",taxes);
        printf("The net pay is %lf",taxes-sum);
    }
    else if(sum>300 && sum<=450){
        taxes+=300*FIRST/100+(sum-300)*NEXT/100;
        printf("The taxes are %lf",taxes);
        printf("The net pay is %lf",sum-taxes);
    }
    else{
        taxes+=300*FIRST/100+150*NEXT/100+(sum-450)*LAST/100;
        printf("The taxes are %lf",taxes);
        printf("The net pay is %lf",sum-taxes);
    }
}

int menu(void){
    printf("Choose your fighter: \n");
    int choice;
    printf("1.Biras omiljenu boju\n");
    printf("2.Flip N Shift broj\n");
    printf("3.Izracunaj koliko je X sati u godinama\n");
    printf("4.Izracunaj koliko si zaradio za X sati\n");
    printf("5.Igra pogadjanje brojeva\n");
    printf("6.Izlistaj proste brojeve od 0 do X\n");
    printf("7.Padavine prosek\n");
    printf("0.EXIT\n");
    scanf("%d",&choice);
    return choice;
}
double calculate_days(double minutes){
    return (minutes/60)/24;
}
double calculate_years(double minutes){
    return calculate_days(minutes)/365;
}
int flip_n_shift(int shift){
    return (~shift)<<2;
}
