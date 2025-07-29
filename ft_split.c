/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:04:45 by iaratang          #+#    #+#             */
/*   Updated: 2025/07/28 20:49:37 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, const char c)
{
	int		num_of_strings;
	char	**strings_array;

	num_of_strings = word_count(s, c);
	strings_array = (char **)malloc(num_of_strings * sizeof(char));
}

static int	word_count(const char *str, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (*str == c)
		{
			in_word = 0;
		}
		str++;
	}

}

static void	ft_free()
{
	
}

static char	*fill_word()
{
	
}