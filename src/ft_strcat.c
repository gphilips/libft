#include "../include/libft.h"

char	*ft_strcat(char *s1, char *s2)
{
	ft_strncat(s1, s2, ft_strlen(s2));
	return (s1);
}
