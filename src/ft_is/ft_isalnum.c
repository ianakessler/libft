#include "libft.h"

int	ft_isalnum(int c)
{
	if(ft_isdigit(c) || ft_alpha(c))
		return (1);
	else
		return (0);
}

#include <stdio.h>
int	main(void)
{
	int res = ft_isalnum('i');
	printf("%d", res);
}