/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:49:53 by iaratang          #+#    #+#             */
/*   Updated: 2025/07/28 15:59:05 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(const char *s1, const char *set)
{
    size_t  s1_len;
    size_t  i;
    size_t  j;

    s1_len = ft_strlen(s1);
    while (str[i] != ' ')
    {
        while (set[j])
        {
            if (str[i] == set[j])
                str[i] = 0;
            j++;
        }
        i++;
    }
    i = s1_len;
    while (str[i] != ' ')
    {
        while (set[j])
        {
            if (str[i] == set[j])
                str[i] = 0;
            j++;
        }
        i--;
    }
    return (ft_strdup(ft_strlen(s1) + 1, sizeof(char)));
}

static char *s1_trimmed(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;
	
	i = 0;
	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = ft_calloc(len + 1, sizeof(char));
	if(!str)
		return (NULL);
	while ( i < len)
	{
		str[i] = s1[start + i];
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
