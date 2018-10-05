
#include "../includes/b_ls.h"

t_list *get_paths(int argc, char **argv)
{
    t_list *paths;
    int i;
    int is_reading_paths_flag;

    is_reading_paths_flag = 0;
    i = 1;
    paths = initialize_node();

    while(i < argc)
    {
        while((argv[i][0] == '-') && (is_reading_paths_flag == 0))
            i++;
        is_reading_paths_flag = 1;
        paths = add_node(paths,argv[i]);
        i++;
    }
    return (paths);
}