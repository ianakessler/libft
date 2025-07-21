/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:52:24 by iaratang          #+#    #+#             */
/*   Updated: 2025/07/21 20:03:54 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void	*dest, const void *src, int len)
{
	char			*tdest;
	const char		*tsrc;
	int				i;

	if (!dest && !src)
		return (0);
	tdest = (char *) dest;
	tsrc = (char *) src;
	if (tdest > tsrc)
	{
		i = len;
		while (--i > 0)
			tdest[i] = tsrc[i];
	}
	else
	{
		i = 0;
		while (++i < len)
			tdest[i] = tsrc[i];
	}
	return (dest);
}
