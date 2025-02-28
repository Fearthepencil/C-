//
//  strings.c
//  C ucenje
//
//  Created by Pavle Stefanovic on 28.2.25..
//

#include <stdio.h>
#include "./libs/stringis.h"
#include <string.h>


void bubbleSort(char* string_array[]){
    char temp[100];
    int count = 0;
    while(strcmp(string_array[count],"")!=0){
        count++;
    }
    
   for(int i=0; i<count-1; i++){
        for(int j=0; j<count-i-1; j++){
            if(strcmp(string_array[j],string_array[j+1])>0){
                strcpy(temp,string_array[j]);
                strcpy(string_array[j], string_array[j+1]);
                strcpy(string_array[j+1],temp);
            }
            
       }
   }
    for(int i=0; i<count; i++){
        printf(" %s ",string_array[i]);
    }
}

bool streql(const char* string1, const char* string2){
    if(strlength(string1)!=strlength(string2))return false;
    int count = 0;
    while(string1[count]!='\0'){
        if(string1[count]!=string2[count]) return false;
        count++;
    }
    return true;
}

void strcontact(const char* string1, const char* string2){
    char result[200];
    int count = 0;
    while(string1[count]!='\0'){
        result[count] = string1[count];
        count++;
    }
    int count2 = 0;
    while(string2[count2]!='\0'){
        result[count] = string2[count2];
        count++;
        count2++;
    }
    printf("The two strings togheter are %s\n",result);
}

int strlength(const char* string){
    int count = 0;
    while(string[count]!='\0'){
        count++;
    }
    return count;
}
