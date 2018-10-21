#include "../includes/b_ls.h"

long long			count_blocks(char *current_path, t_list *entity, int flag_a)
{
	t_list			*tmp;
	long long		blocks;
    struct stat     buff;
	char *name;
	char *file_name;
    name = "";

	//If flag a active, count with file name starting with .
	//else skip

	blocks = 0;
	tmp = entity;
	while (tmp)
	{
		file_name = (char *)tmp->data;
		if(current_path[ft_strlen(current_path)-1] != '/')
		  name = ft_strcat(ft_strcat(current_path, "/"), file_name);
    	else
		  name = ft_strcat(current_path, file_name);

        stat(name, &buff);
		
		if(flag_a == 1)
			blocks += buff.st_blocks;
		else
			if(file_name[0] != '.' )
				blocks += buff.st_blocks;

		tmp = tmp->next;
	}
	return (blocks);
}