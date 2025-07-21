int	ft_strlcpy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	if(size > 0)
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
