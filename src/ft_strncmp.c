int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i <= n)
	{
		if (s1[i] != s2[i])
			return (s2[i] - s1[i]);
		i++;
	}
	return (0);
}
