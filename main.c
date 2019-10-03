#include <stdio.h>
#include <string.h>
#include "function.h"

int main()
{
  //mystrlen tests
  char *empty = "";
  printf("Testing mystrlen:\n");
  printf("Expected length: %zu.\tMy length: %zu.\n", strlen(empty), mystrlen(empty));
  char *readonly = "Hello, apple pie!"; //17 characters, ignoring NUL
  printf("Expected length: %zu.\tMy length: %zu.\n\n", strlen(readonly), mystrlen(readonly));

  printf("Testing mystrcpy:\n");
  char my_readonly_copy[32] = "";
  mystrcpy(my_readonly_copy, readonly);
  printf(
      "Original target: %s\nOriginal hello: %s\nCopied hello at target: %s\n\n",
      my_readonly_copy,
      readonly,
      my_readonly_copy);

  printf("Testing mystrcmp:\n");
  printf(
      "Expected val for equal strings: %d.\tMy val: %d.\n",
      strcmp(readonly, my_readonly_copy),
      mystrcmp(readonly, my_readonly_copy));

  printf(
      "Expected val for equal strings: %d.\tMy val: %d.\n",
      strcmp(my_readonly_copy, readonly),
      mystrcmp(my_readonly_copy, readonly));

  char *uneq_1 = "ba";
  char *uneq_2 = "bb";

  printf(
      "Expected val for unequal strings (same len): %d.\tMy val: %d.\n",
      strcmp(uneq_1, uneq_2),
      mystrcmp(uneq_1, uneq_2));

  printf(
      "Expected val for unequal strings (same len reversed): %d.\tMy val: %d.\n",
      strcmp(uneq_2, uneq_1),
      mystrcmp(uneq_2, uneq_1));

  char *uneq_3 = "baa";
  printf(
      "Expected val for unequal strings (different len): %d.\tMy val: %d.\n\n",
      strcmp(uneq_1, uneq_3),
      mystrcmp(uneq_1, uneq_3));

  char src[30] = "ThisIsATest";
  char dest[30] = "ForSystemsLevelProgramming";
  int x = 10;
  int y = 15;
  char *p;
  p = strncat(dest, src, x);
  char *q;
  q = strncat(dest, src, y);
  printf("Testing strncat:\n");
  printf("Source string : %s\n", src);
  printf("Concatenation for %d letters: %s\n\n", x, p);

  printf("Testing strchr:\n");
  char str[] = "A Test for this Function";
  char ch = 'h';
  char cr = 'x';
  
  p = mystrchr(str, ch);
  q = mystrchr(str, cr);
  printf("String from %c is: %s \n", ch, p);
  printf("String from %c is: %s \n", cr, q);

  return 0;
}
