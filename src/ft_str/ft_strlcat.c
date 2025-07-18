#include "libft.h"

int	ft_strlcat(char *dest, char *src, int size)
{
	int dest_len;
	int	src_len;
	int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if(dest_len + src_len > size);
		return (dest_len + src_len);
	while (i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (ft_strlen(dest));
}

int	main(void)
{
	char *src = "mundo";
	char *dest = "ola";

	printft("Concatenando '%s' em '%s'...\n");
	int res = ft_strlcat(dest, src, 15);

	printf("Resultando em: '%s', com tamanho: '%d'", dest, res);
	return (0);
}