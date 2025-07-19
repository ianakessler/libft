void	*ft_memset(void *b, int c, int len)
{
	unsigned char	*tmp;
	int	i;

	tmp = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		tmp[i] = (unsigned char) c;
		i++;		
	}
	return (b);
}

#include <stdio.h>

int	main(void)
{
	char str[20];
	char *res = ft_memset(str, '0', 10);
	printf("%s", res);
}
