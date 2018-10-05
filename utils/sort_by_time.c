
#include "../includes/b_ls.h"

//                                             This has to be reverse
t_list      *sort_by_time(t_list *paths, int flag_time)
{
    t_list       *i;
    t_list       *j;
    struct  stat st1;
    struct  stat st2;

    flag_time = -1;
    /*
    i = paths;
    while(i)
    {
        j = paths;
        while(j->next)
        {
            lstat((char *) j->data, &st1);
            lstat((char *) j->next->data, &st2);
            if( flag_time ?  st1.st_mtime > st2.st_mtime : st1.st_mtime < st2.st_mtime)
                node_swap(j, j->next);
            if()
            j = j->next;
        }
    }
    */
    return (paths);
}