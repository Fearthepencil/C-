/*
 Author: fearthepencil
 Purpose: ucenje
 Date: 11/02/25
 Time spent: 2h50min
*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    
    int myVar;
    char niz[100];
    bool istina = true;
    int count = 0;
    enum boja{plava,crvena,zuta} bojan;
    
    while(istina){
        printf("Hello, what is your number? ");
        
        scanf("%d",&myVar);
        
        printf("And your name please:");
        scanf("%s",niz);
        
        printf("Tvoj broj je %d\n",myVar);
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
        count++;
        if(count==2) istina = false;
    }
    return 0;
}
