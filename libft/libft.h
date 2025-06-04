#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

// Function prototypes for character classification functions
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

// Function prototypes for string manipulation functions
size_t ft_strlen(const char *str);

// Function prototypes for memory management functions
void ft_bzero(void *buffer, size_t n);
void *ft_memset(void *dest, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);

#endif