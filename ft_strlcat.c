/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:52:22 by iaratang          #+#    #+#             */
/*   Updated: 2025/07/23 19:23:44 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize < dst_len + src_len)
		return (dst_len + src_len);
	if (dstsize > dst_len + src_len)
	{
		while (i < dstsize - 1)
		{
			dst[dst_len + 1] = src[i];
			i++;
		}
	}
	dst[dstsize] = '\0';
	return (ft_strlen(dst));
}
