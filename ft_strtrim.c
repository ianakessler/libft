/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:49:53 by iaratang          #+#    #+#             */
/*   Updated: 2025/07/25 22:50:11 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *s1_trimmed(const char *s1, size_t size, const char *set);
static int  to_trim(const char c, const char *set);

char    *ft_strtrim(const char *s1, const char *set)
{
    size_t  len;
    size_t  cut_size;
    size_t  i;

    len = ft_strlen(s1);
    i = 0;
    cut_size = 0;
    while (s1[i] != ' ')
    {
        if (to_trim(s1[i], set))
            cut_size++;
        i++;
    }
    i = len;
    while (s1[i] != ' ')
    {
        if (to_trim(s1[i], set))
            cut_size++;
        i--;
    }
    return (s1_trimmed(s1, len + 1 - cut_size, set));
}

static char *s1_trimmed(const char *s1, size_t size, const char *set)
{
    char    *str;
    size_t  i;
    size_t  j;

    str = ft_calloc(size, sizeof(char));
    if (!str)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
    {
        if (!to_trim(s1[i], set))
        {
            str[j] = s1[i];
            j++;
        }
        i++;
    }
    return (str);
}

static int  to_trim(const char c, const char *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] ==c )
            return (1);
        i++;
    }
    return (0);
}
