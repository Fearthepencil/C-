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

double calculate_area(double a, double b){
    return a*b;
}
double calculate_perimeter(double a, double b){
    return 2*(a+b);
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
