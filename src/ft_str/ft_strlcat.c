/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:52:49 by iaratang          #+#    #+#             */
/*   Updated: 2025/07/21 20:07:24 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, int size)
{
	int	dest_len;
	int	src_len;
	int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len + src_len > size)
		return (dest_len + src_len);
	while (i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (ft_strlen(dest));
}
