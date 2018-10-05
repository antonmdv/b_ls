#include "../includes/b_ls.h"

t_list  *apply_paths_flags(t_list *paths, t_flags flags)
{
    paths = sort_by_name(paths, flags.r);

    //Redo function with reverse;
    paths = sort_by_time(paths, flags.t);

    return paths;
}