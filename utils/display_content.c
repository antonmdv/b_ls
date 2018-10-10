#include "../includes/b_ls.h"

void        display_content(t_list *content, t_flags flags)
{
    char *name;
    //AKA
    //sort by name
    //sort by time if applicable 
    content = apply_paths_flags(content, flags);

    //DISPLAY .. if -a
    while(content)
    {
        if(flags.a == 0)
        {
            name = (char *) content->data;
            if(name[0] == '.')
                content = content->next;
            else
                //chose what format to display in the rest
                printf("%s\n", (char *)content->data);   
        }
        else
            //chose what format to display in the rest
            printf("%s\n", (char *)content->data);
        content = content->next;
    }
}