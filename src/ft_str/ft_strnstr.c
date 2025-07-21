/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:53:02 by iaratang          #+#    #+#             */
/*   Updated: 2025/07/21 19:53:03 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *substr, char *str, int size)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if(!substr)
		return (str);
	
	while (str[i] && i < size)
	{
		while (str[i + c] == substr[c])
		{
			c++;
			if(substr[c] == '\0')
				return (&str[i + c -1]);
		}
		i++;
	}
	return (0);
}
