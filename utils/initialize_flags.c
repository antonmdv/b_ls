
#include "../includes/b_ls.h"

t_flags		initialize_flags(void)
{
	t_flags	flags;

	flags.a = 0;
	flags.l = 0;
	flags.r = 0;
	flags.t = 0;
	flags.invalid = 0;
	return (flags);
}
