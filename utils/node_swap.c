
#include "../includes/b_ls.h"

void		node_swap(t_list *node_one, t_list *node_two)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	node_copy(node_one, tmp);
	node_copy(node_two, node_one);
	node_copy(tmp, node_two);
}
