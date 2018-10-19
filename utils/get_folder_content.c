#include "../includes/b_ls.h"

t_list				*get_folder_content(char *folder_name)
{
    t_list          *contents;
    DIR             *dir;
    struct stat     buff;
    struct dirent   *ep;

    contents = initialize_node();
    dir = opendir(folder_name);
    stat(folder_name, &buff);

    if (dir && (buff.st_mode & S_IFDIR) == S_IFDIR)
        while (((ep = readdir (dir))))
            contents = add_node(contents, ep->d_name);
	(void) closedir (dir);
    return (contents);
}
