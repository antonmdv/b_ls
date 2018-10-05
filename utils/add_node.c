#include "../includes/b_ls.h"

t_list  *add_node(t_list *list, void *data)
{   
    t_list *head;
    t_list *node;

    if(list->data == NULL && list->next == NULL)
    {
        list->data = data;
        return list;
    }

    head = list;
    while(list->next)
        list = list->next;

    node = initialize_node();
    node->data = data;
    node->next = NULL;
    list->next = node;

    return head; 
}