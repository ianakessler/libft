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
#include <stdio.h>
void	teste(int size)
{
	char *str = "ola mundo, fazendo um teste";
	char dest[38];
	int res;

	res = ft_strlcpy(dest, str, size);

	printf("'%s' Copiado para '%s', len: '%d'\n", str, dest, res);
}

int	main(void)
{
	teste(40);
	teste(20);
	teste(10);
	teste(1);
	teste(0);
}