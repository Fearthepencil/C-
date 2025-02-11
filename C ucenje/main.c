/*
 Author: fearthepencil
 Purpose: ucenje
 Date: 11/02/25
 Time spent: 3h25min
*/

#include <stdio.h>
#include <stdbool.h>
#include "./libs/header.h"

int main(int argc, const char * argv[]) {
    
    char niz[100];
    bool istina = true;
    int count = 0;
    enum boja{plava,crvena,zuta} bojan;
    double a,b;
    while(istina){
        printf("Your name please:");
        scanf("%s",niz);

        printf("Tvoje ime je %s\n",niz);
        
        printf("Koja ti je omiljena boja?\n0.plava\n1.crvena\n2.zuta");
        scanf("%d",&bojan);
        
        printf("Vasa omiljena boja je: ");
        if(bojan==plava){
            printf("plava");
        }
        else if(bojan==crvena){
            printf("crvena");
            
        }
        else if(bojan==zuta){
            printf("zuta");
        }
        printf("\n");
        
        printf("Unesi dva broja koja ce da budu strane pravougaonika\n");
        scanf("%lf %lf",&a,&b);
        double area = calculate_area(a,b);
        double perimeter = calculate_perimeter(a,b);
        printf("Uneo si %.2lf %.2lf, Povrsina je: %.2lf, Obim je: %.2lf",a,b,area,perimeter);
        count++;
        if(count==2) istina = false;
    }
    return 0;
}
