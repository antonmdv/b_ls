#include "../includes/b_ls.h"

void		display_content(char *current_path, t_list *content, t_flags flags)
{
	char	*name;

	content = apply_flags_r_t(content, flags);
	if (flags.l == 1)
		printf("total %lld\n",
		count_blocks(current_path, content, flags.a));
	while (content)
	{
		name = (char *)content->data;
		if (flags.a == 0)
		{
			while (name[0] == '.')
			{
				content = content->next;
				name = (char *)content->data;
			}
		}
		if (flags.l == 1)
			l_mode_display(current_path, name);
		else
			printf("%s\n", name);
		content = content->next;
	}
}
