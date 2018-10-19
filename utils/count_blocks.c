#include "../includes/b_ls.h"

long long			count_blocks(t_list *entity)
{
	t_list			*tmp;
	long long		blocks;
    struct stat     buff;

	blocks = 0;
	tmp = entity;
	while (tmp)
	{
        lstat((char *)tmp->data, &buff);
		blocks += buff.st_blocks;
		tmp = tmp->next;
	}
	return (blocks);
}