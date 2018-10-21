#include "../includes/b_ls.h"

char	*ft_strcat(char *dest, char *src)
{
    char *new_str;
	int i;
	int j;

	i = 0;
    new_str = (char *)malloc(sizeof(char) * (ft_strlen(dest)+ft_strlen(src)));
	while (dest[i] != '\0')
    {
		new_str[i] = dest[i];
        i++;
    }
	j = 0;
	while (src[j] != '\0')
	{
		new_str[i + j] = src[j];
		j++;
	}
	new_str[i + j] = '\0';
	return (new_str);
}