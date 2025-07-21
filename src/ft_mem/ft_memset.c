/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:52:27 by iaratang          #+#    #+#             */
/*   Updated: 2025/07/21 20:04:30 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, int len)
{
	unsigned char	*tmp;
	int				i;

	tmp = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		tmp[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
