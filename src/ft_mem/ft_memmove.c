#include <stdio.h>
void	*ft_memmove(void	*dest, const void *src, size_t len)
{
	char	*tdest;
	const char	*tsrc;
	unsigned int	i;

	if(!dest && !src)
		return (0);
	tdest = (char *) dest;
	tsrc = (char *) src;
	if(tdest > tsrc)
	{
		i = len;
		while (i > 0)
		{
			tdest[i] = tsrc[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			tdest[i] = tsrc[i];
			i++;
		}
	}
	return (dest);
}

