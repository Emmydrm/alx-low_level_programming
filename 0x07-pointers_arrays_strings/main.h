#ifndef MAIN_H
#define MAIN_H

/**
 * file: main.h
 * Auth: sam tech (samuel birhanu)
 * destription: Header containing prototypes for all the function 
 * used in the 0x07-pointer_to_pointer
 */

#include <stddef.h>

int _putchar(char c);
char *_memset(char *s, char c, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int_strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif
