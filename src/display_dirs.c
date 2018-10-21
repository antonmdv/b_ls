
#include "../includes/b_ls.h"

void			display_dirs(t_list *paths, t_flags flags)
{
	t_list		*current_content;
	t_list		*tmp;
	DIR			*dir;
	struct stat	buff;

	current_content = initialize_node();
	tmp = paths;
	while (paths)
	{
		dir = opendir((char *)paths->data);
		stat((char *)paths->data, &buff);
		if (dir && (buff.st_mode & S_IFDIR) == S_IFDIR)
		{
			current_content = get_folder_content((char *)paths->data);
			if (list_length(tmp) > 1)
				printf("%s:\n", (char *)paths->data);
			display_content((char *)paths->data, current_content, flags);
			if (list_length(tmp) > 1 && paths->next)
				printf("\n");
		}
		paths = paths->next;
	}
}
