
#include "../includes/b_ls.h"

void				display_dirs(t_list *paths, t_flags flags)
{
    t_list  *current_content;
    current_content = NULL;

    while(paths)
    {
        current_content = get_folder_content((char *)paths->data);
        if(current_content != NULL)
            display_content(current_content, flags);
        paths = paths->next;
    }
}