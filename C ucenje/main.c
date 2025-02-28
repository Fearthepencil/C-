/*
 Author: fearthepencil
 Purpose: ucenje
 Date: 26/02/25
 Time spent: 8h50min
*/

#include <stdio.h>
#include <stdbool.h>
#include "./libs/header.h"
#include "./libs/games.h"
#include "./libs/stringis.h"
#include <string.h>

int main(int argc, const char * argv[]) {
    int shift;
    double minutes;
    double hours;
    char niz[100];
    int istina = 1;
    enum boja{plava,crvena,zuta} bojan;
    printf("Your name please:");
    scanf("%s",niz);
    printf("Dobrodosao %s \n",niz);
    while(istina){
        istina = menu();
        switch (istina) {
            case 1:
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
                break;
            case 2:
                printf("Unesi broj da flipujes i shiftujes: ");
                scanf("%d",&shift);
                shift = flip_n_shift(shift);
                printf("Broj je sad %d",shift);
                break;
            case 3:
                printf("Unesi broj minuta: ");
                scanf("%lf",&minutes);
                double days = calculate_days(minutes);
                double years = calculate_years(minutes);
                printf("In days this is %5.3lf, In years this is %5.4lf\n",days,years);
                break;
            case 4:
                printf("Enter hours worked: ");
                scanf("%lf",&hours);
                pay(hours);
                break;
            case 5:
                printf("Unesi max:");
                int range;
                scanf("%d",&range);
                random_guesser(range);
                break;
            case 6:
                printf("Unesi range");
                int range_prime;
                scanf("%d",&range_prime);
                prime(range_prime);
                break;
            case 7:
                printf("Unesi kisu po mesecima za prethodnih 5 godina: ");
                rainfall();
                break;
            case 8:
                tic_tac_toe();
                break;
            case 9:
                printf("Izaberi jednu od str f-ja\n");
                int choose = 0;
                printf("1.Strlen\n2.StrConcat\n3.StrCmp\n4.BubbleSort\n");
                scanf("%d",&choose);
                switch (choose) {
                    case 0:
                        printf("Going back");
                        break;
                    case 1:{
                        char string1[100];
                        scanf("%s",string1);
                        printf("Length is %d\n",strlength(string1));
                        break;
                        }
                    case 2:
                    {
                        char string1[100];
                        char string2[100];
                        scanf("%s",string1);
                        scanf("%s",string2);
                        strcontact(string1, string2);
                        break;
                    }
                    case 3:
                    {
                        char string1[100];
                        char string2[100];
                        scanf("%s",string1);
                        scanf("%s",string2);
                        printf("Strings are equal is: %d",streql(string1, string2));
                        break;
                    }
                    case 4:{
                        char* string[100];
                        char current[100];
                        int i = 0;
                        printf("Input strings, input exit when you've had enough\n");
                        while(strcmp(current,"exit")!=0){
                            scanf("%s",current);
                            string[i] = malloc(100);
                            strcpy(string[i],current);
                            i++;
                        }
                        bubbleSort(string);
                    }
                }
            case 0:
                istina = 0;
                break;
            default:
                istina=30;
                printf("Unesi normalan broj za meni majmune\n");
        }
    }
    return 0;
}
