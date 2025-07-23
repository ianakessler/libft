/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:10:39 by iaratang          #+#    #+#             */
/*   Updated: 2025/07/23 19:24:13 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize > src_len + 1)
	{
		while (i < src_len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (i < dstsize - 1)
		{
			dst[i] = src[i];
		}
	}
	dst[dstsize] = '\0';
	return (src_len);
}
