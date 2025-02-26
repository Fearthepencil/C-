//
//  stringis.h
//  C ucenje
//
//  Created by Pavle Stefanovic on 26.2.25..
//

#ifndef stringis_h
#define stringis_h

int strlength(const char* string){
    int count = 0;
    while(string[count]!='\0'){
        count++;
    }
    return count;
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

bool streql(const char* string1, const char* string2){
    if(strlength(string1)!=strlength(string2))return false;
    int count = 0;
    while(string1[count]!='\0'){
        if(string1[count]!=string2[count]) return false;
        count++;
    }
    return true;
}
#endif /* stringis_h */
