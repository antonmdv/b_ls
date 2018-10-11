#include "../includes/b_ls.h"

t_flags     get_flags(int argc, char **argv)
{
    t_flags flags;
    int     i;
    int     j;

    flags = initialize_flags();
    i = 1;

    while(i < argc)
    {
        j = 0;
        
        if(argv[i][j] == '-' && argv[i][++j])
        {
            while(j < (int)ft_strlen(argv[i]))
            {
                if(is_valid_flag(argv[i][j]) == 1)
                    flags = set_valid_flag(flags, argv[i][j]);
                else
                {
                    flags = set_invalid_flag(flags);
                    printf("b_ls: illegal option -- %c\n", argv[i][j]);
                    printf("usage: ./b_ls [-arlt] [file ...]\n");
                }
                j++;
            }
        }
        else
            break;
        i++;
    }
    return (flags);
}