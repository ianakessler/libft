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
