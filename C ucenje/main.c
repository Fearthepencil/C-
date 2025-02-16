/*
 Author: fearthepencil
 Purpose: ucenje
 Date: 11/02/25
 Time spent: 4h20min
*/

#include <stdio.h>
#include <stdbool.h>
#include "./libs/header.h"

int main(int argc, const char * argv[]) {
    
    int shift;
    double minutes;
    double hours;
    char niz[100];
    bool istina = true;
    int count = 0;
    enum boja{plava,crvena,zuta} bojan;
    double a,b;
    while(istina){
        printf("Enter hours worked: ");
        scanf("%lf",&hours);
        pay(hours);
//        printf("Your name please:");
//        scanf("%s",niz);
//
//        printf("Tvoje ime je %s\n",niz);
//        
//        printf("Koja ti je omiljena boja?\n0.plava\n1.crvena\n2.zuta");
//        scanf("%d",&bojan);
//        
//        printf("Vasa omiljena boja je: ");
//        if(bojan==plava){
//            printf("plava");
//        }
//        else if(bojan==crvena){
//            printf("crvena");
//            
//        }
//        else if(bojan==zuta){
//            printf("zuta");
//        }
//        printf("\n");
//        
//        printf("Unesi dva broja koja ce da budu strane pravougaonika\n");
//        scanf("%lf %lf",&a,&b);
//        double area = calculate_area(a,b);
//        double perimeter = calculate_perimeter(a,b);
//        printf("Uneo si %.2lf %.2lf, Povrsina je: %.2lf, Obim je: %.2lf\n",a,b,area,perimeter);
//       
//        printf("Unesi broj minuta: ");
//        scanf("%lf",&minutes);
//        double days = calculate_days(minutes);
//        double years = calculate_years(minutes);
//        printf("In days this is %5.3lf, In years this is %5.4lf\n",days,years);
//        
//        printf("Unesi broj da flipujes i shiftujes: ");
//        scanf("%d",&shift);
//        shift = flip_n_shift(shift);
//        printf("Broj je sad %d",shift);
//        count++;
//        if(count==1) istina = false;
        
    }
    return 0;
}
