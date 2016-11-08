#include "../include/libft.h"

static int ft_get_len(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*dest;
	size_t			len;

	len = ft_get_len(n);
	dest = ft_strnew(len);
	if (!dest || !n)
		return (NULL);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = -n;
		dest[0] = '-';	
	}
	while (n)
	{
		dest[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (dest);
}
