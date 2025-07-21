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
			if(res > 2147483647 / 10 || (res == 2147483647 / 10 && str[i] - '0' > 7))
			{
				if (signal == -1)
					return (-2147483648);
				if (signal == 1)
					return (2147483647);
			}
			res = res * 10 + (str[i] - '0');
			i++;
		}
		return (res * signal);
	}
	return (0);
}

