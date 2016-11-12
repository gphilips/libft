#include "../include/libft.h"

char	*ft_strtrim(char const *s)
{
	size_t			len;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*tmp;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = len - 1;	
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if (i == len)
		return (ft_strnew(0));
	if (!(tmp = (char*)malloc(sizeof(char) * (i - j + 1))))
		return (NULL);
	k = 0;
	while (i <= j)
	{
		tmp[k] = s[i];
		k++;
		i++;
	}
	tmp[k] = '\0';
	return (tmp);
}
