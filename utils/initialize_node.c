
#include "../includes/b_ls.h"

t_list		*initialize_node(void)
{
	t_list	*paths;

	paths = (t_list *)malloc(sizeof(t_list));
	paths->data = NULL;
	paths->next = NULL;
	return (paths);
}
