
#include "../includes/b_ls.h"

void	display_symlinks(t_list *paths, t_flags flags)
{
	t_list			*symlink_list;
	struct stat		buff;

	symlink_list = initialize_node();
	while (paths)
	{
		if (lstat((char *)paths->data, &buff) != -1)
			if ((buff.st_mode & S_IFLNK) == S_IFLNK)
				symlink_list = add_node(symlink_list, paths->data);
		paths = paths->next;
	}
	if (symlink_list->data != NULL)
		display_content(".", symlink_list, flags);
}
