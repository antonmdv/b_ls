#include "../includes/b_ls.h"

t_flags set_invalid_flag(t_flags flags)
{
    flags.invalid = 1;
    return (flags);
}