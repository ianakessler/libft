char	*ft_strnstr(char *substr, char *str, int size)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if(!substr)
		return (str);
	
	while (str[i] && i < size)
	{
		while (str[i + c] == substr[c])
		{
			c++;
			if(substr[c] == '\0')
				return (&str[i + c -1]);
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
int	main(void)
{
	char *str = "banana de pijamas";
	char *res = ft_strnstr("ana", str, 10);
	printf("%s", res);
	return 1;
}