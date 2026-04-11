#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stding.h>

int             ft_isupper(int c);
int             ft_islower(int c);
int             ft_toupper(int c);
int             ft_tolower(int c);
int             ft_isalpha(int c);
int             ft_isdigit(int c);
int             ft_alnum(int c);
int             ft_isascii(int c);
int             ft_isprint(int c);
int             ft_atoi(const char *str);
char            *ft_strchr(const char *str, int c);
char            *ft_strrchr(const char *str, int c);
size_t          ft_strlen(const char *str);
int             ft_strncmp (const char *s1, const char *s2, size_t n);
char            *ft_strdup(const char *str);
void            *ft_calloc(size_t number, size_t size);
void            *ft_memset(void *s, int c, size_t n);
void            *ft_memcpy(void *dest, const void *src, size_t n);
void            *ft_memchr(const void *s, int c, size_t n);

#endif