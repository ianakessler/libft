#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, int n);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
int	ft_strlen(char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_isalnum(int c);
int ft_tolower(int c);
int ft_toupper(int c);

#endif
