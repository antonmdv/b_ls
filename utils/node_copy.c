
#include "../includes/b_ls.h"

void		node_copy(t_list *src, t_list *dst)
{
	t_list	*tmp;

	tmp = dst;
	tmp->data = src->data;
}
