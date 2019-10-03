#include "function.h"

char *mystrchr(char *s, char c)
{
    while (*s++ != '\0')
    {
        if (*s == c)
            return s;
    }
    return NULL;
}

char *mystrcpy(char *dest, char *source)
{
    char *ret_val = dest;

    do
    {
        *dest = *source;
        dest++;
        source++;
    } while (*source != '\0');

    return ret_val;
}

size_t mystrlen(char *str)
{
    int len = 0;
    while (str[len] != 0)
    {
        len++;
    }
    return (len);
}

char *mystrncat(char *dest, char *src, size_t n)
{
    char *ans = dest + mystrlen(dest);
    for (int i = 0; i < n; i++)
    {
        *ans++ = *src++;
    }
    *ans++ = '\0';
    return dest;
}

int mystrcmp(char *s1, char *s2)
{
    do
    {
        if (*s1 != *s2)
            return *s1 - *s2;
        else if (*s1 == '\0' && *s2 == '\0')
            return 0;
        else if (*s1 == '\0')
            return -1;
        else if(*s2 == '\0')
            return 1;
        s1++;
        s2++;
    } while (1);
}