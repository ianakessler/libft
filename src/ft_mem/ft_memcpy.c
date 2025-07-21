/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:52:21 by iaratang          #+#    #+#             */
/*   Updated: 2025/07/21 19:56:39 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, int size)
{
	unsigned char	*dest_tmp;
	unsigned char	*src_tmp;
	int				i;

	i = 0;
	if (dest == 0 && src == 0)
		return (dest);
	dest_tmp = (unsigned char *) dest;
	src_tmp = (unsigned char *) src;
	while (i < size)
	{
		dest_tmp[i] = src_tmp[i];
		i++;
	}
	return (dest);
}
