void	ft_bzero(void *s, int n)
{
	if( n > 0)
	{
		char *tmp; 
		int	i;

		i = 0;
		tmp = (char *)s;
		while(i < n)
		{
			tmp[i] = 0;
			i++;
		}
	}
}