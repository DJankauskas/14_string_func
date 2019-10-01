#include<stdio.h>

char* mystrncat(char *dest, char *src, size_t n){
    char *ans = dest + strlen(dest);
    for (int i = 0; i < n; i++){
        *ans++ = *src++;
    }
    *ans++ = '\0';
    return dest;
}

