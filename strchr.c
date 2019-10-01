#include<stdio.h>

char* mystrchr(char *s, char c){
    while (*s++ != '\0'){
        if (*s == c) return s;
    }
    return NULL;
}
