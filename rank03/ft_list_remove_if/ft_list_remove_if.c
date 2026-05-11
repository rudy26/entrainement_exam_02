#include "list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *tmp;
    t_list *prev;

    if(!begin_list || !*begin_list)
        return;

    while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
    {
        tmp = *begin_list;
        *begin_list = (*begin_list)->next;
        free(tmp);
    }
    prev = *begin_list;

    while(prev && prev->next)
    {
        if(cmp(prev->next->data, data_ref) == 0)
        {
            tmp = prev->next;
            prev->next = tmp->next;
            free(tmp);
        }
        else
            prev = prev->next;
    }
    
}