/*
    Two string literals concatenate and store in a dynamic array

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)  {

  char *string1 = "Hello,";
  char *string2 = " world!";
  int length1 = strlen(string1);
  int length2 = strlen(string2);
  char *result = malloc(length1 + length2 + 1);

  strcpy(result, string1);
  result = strcat(result, string2);

  printf("%s\n", result);
  free(result);

  return 0;
}