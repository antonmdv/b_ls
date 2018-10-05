
#include "../includes/b_ls.h"

int is_valid_flag(char c)
{
    int is_valid;

    is_valid = 0;
    if (c == 'a' || c == 'l' || c == 't' || c == 'r')
        is_valid = 1;
    return (is_valid);
}