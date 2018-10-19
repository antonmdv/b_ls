#include "../includes/b_ls.h"

char	*mode_print(mode_t mode)
{
	size_t		i;
	static char temp[10];
	static char buf[] = "rwxrwxrwx";

	i = 0;
	while (i < 9)
	{
		temp[i] = (mode & (1 << (8 - i))) ? buf[i] : '-';
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
