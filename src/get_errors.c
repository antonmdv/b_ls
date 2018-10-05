
#include "../includes/b_ls.h"

t_list  *get_errors(t_list *paths)
{
    t_list  *root;
    DIR     *dir;
    struct  stat st;

    //  1. Sort List by name -> NEEDS IMPLEMENTATION
    paths  = sort_by_name(paths, 0);

    //  2. Display errors and  ?? remove invalid paths ?? 
    root = paths;
    while(paths)
    {
        dir = opendir((char *)paths->data);
        if ( stat( (char *)paths->data, &st) && !dir)
			printf("b_ls: %s: No such file or directory\n", (char *)paths->data);
        paths = paths->next;
    }
    return (root);
}