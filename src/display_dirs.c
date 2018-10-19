
#include "../includes/b_ls.h"

void				display_dirs(t_list *paths, t_flags flags)
{
	t_list  *current_content;
	t_list	*tmp;
   	current_content = initialize_node();
	DIR	*dir;
	struct stat buff;	

	//delete later
	//flags.l =-1;		
	
	
	tmp = paths;

	while(paths)
	{
		dir = opendir((char *) paths->data);
		stat((char *)paths->data, &buff);
		if(dir && (buff.st_mode & S_IFDIR) == S_IFDIR)
		{
			//printf("FOLDER: %s\n", (char *) paths->data);
			current_content = get_folder_content((char *)paths->data);
			//Check if the list length is greater than 1
			if(list_length(tmp) > 1)
				printf("%s:\n",(char *)paths->data);
			display_content(current_content, flags);
			if(list_length(tmp) > 1 && paths->next)
				printf("\n");
			/*
			while(current_content)
			{
				printf("%s\n", (char *)current_content->data);
				current_content = current_content->next;
			}
			*/
		}	
		paths = paths->next;
	}
	
	/* 
	while(paths)
	{
		//paths->data cointains actual paths to folders
		//catch if path->data is indeed a folder
		current_content = get_folder_content((char *)paths->data);
       		printf("FOLDER: %s\n", (char *) current_content->data);
	
	       	//if(current_content != NULL)
        	//	display_content(current_content, flags);
       	
		paths = paths->next;
    	}
	*/
}
