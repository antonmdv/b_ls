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

void        display_content(t_list *content, t_flags flags)
{
    char            *name;
    
    //sort by name && time
    content = apply_flags_r_t(content, flags);

    if(flags.l == 1)
            printf("total %lld\n", count_blocks(content));

    //DISPLAY .. if -a
    while(content)
    {
        if(flags.a == 0)
        {
            name = (char *) content->data;
            if(name[0] == '.')
                content = content->next;
            else
                //chose what format to display in the rest
                //display_entity((char *)content->data, flags.l);
                printf("%s\n", (char *)content->data);
        }
        else
            //chose what format to display in the rest
            //display_entity((char *)content->data, flags.l);
            printf("%s\n", (char *)content->data);
        content = content->next;
    }
}