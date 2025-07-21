/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:53:17 by iaratang          #+#    #+#             */
/*   Updated: 2025/07/21 20:17:31 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

static int	ft_ispos(int c)
{
	return (c == '+');
}

static int ft_isneg(int c)
{
	return (c == '-');
}

static int ft_isnumber(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int	qtdsinal;
	int	signal;
	int	res;

	res = 0;
	i = 0;
	signal = 1;
	qtdsinal = 0;
	while (str[i])
	{
		while (ft_isspace(str[i]))
			i++;
		while (ft_isneg(str[i]) || ft_ispos(str[i]))
		{
			qtdsinal++;
			if(ft_isneg(str[i]))
				signal = -1;
			i++;
		}
		if(qtdsinal > 1)
			return (0);
		while (ft_isnumber(str[i]))
		{
			res = res * 10 + (str[i] - '0');
			i++;
		}
		return (res * signal);
	}
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int res = ft_atoi("1");
	int res1 = ft_atoi("999999999999");
	int res2 = atoi("1");
	int res3 = atoi("9999999999999");

	printf("%d\n", res);
	printf("%d\n", res1);
	printf("Original\n");
	printf("%d\n", res2);
	printf("%d\n", res3);

}
