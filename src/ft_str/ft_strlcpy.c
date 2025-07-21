/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:52:52 by iaratang          #+#    #+#             */
/*   Updated: 2025/07/21 20:07:49 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[size] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
