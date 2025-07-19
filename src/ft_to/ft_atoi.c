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
	int	sinal;
	int	res;

	res = 0;
	i = 0;
	sinal = 1;
	qtdsinal = 0;
	while (str[i])
	{
		while (ft_isspace(str[i]))
			i++;
		while (ft_isneg(str[i]) || ft_ispos(str[i]))
		{
			qtdsinal++;
			if(ft_isneg(str[i]))
				sinal = -1;
			i++;
		}
		if(qtdsinal > 1)
			return (0);
		while (ft_isnumber(str[i]))
		{
			if(res > 2147483647 / 10 || (res == 2147483647 / 10 && str[i] - '0' > 7))
			{
				if (sinal == -1)
					return (-2147483648);
				if (sinal == 1)
					return (2147483647);
			}
			res = res * 10 + (str[i] - '0');
			i++;
		}
		return (res * sinal);
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	int res, res1, res2, res3;

	res = ft_atoi("\r \n \t \v      \r\r\r\r      -1234ab567");
	res1 = ft_atoi("-");
	res2 = ft_atoi("-999999999999");
	res3 = ft_atoi("  -0012gfg4");
	printf("teste1: %d\nteste2: %d\nteste3: %d\nteste4: %d", res, res1, res2, res3);
	return (0);
}
