/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:53:07 by iaratang          #+#    #+#             */
/*   Updated: 2025/07/21 19:53:07 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, int c)
{
	int	i;
	int	last_occurrence;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			last_occurrence = i;
		i++;
	}
	if (last_occurrence != 0)
		return (&str[last_occurrence]);
	else
		return (0);
}
