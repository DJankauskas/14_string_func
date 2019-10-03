#ifndef FUNCTION_HEADER
#define FUNCTION_HEADER

#include <stdio.h>

size_t mystrlen(char *s);
char *mystrcpy(char *dest, char *source);
char *mystrncat(char *dest, char *source, size_t n);
int mystrcmp(char *s1, char *s2);
char *mystrchr(char *s, char c);

#endif
