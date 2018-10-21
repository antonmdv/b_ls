#include "../includes/b_ls.h"

//DELETE COMMENTS AFTER FINISH WITH FORMATTING

void        l_mode_display(char *current_path, char *entity)
{
    char c;
    struct stat buff;
    char *name;

    name = "";
	  if(current_path[ft_strlen(current_path)-1] != '/')
		  name = ft_strcat(ft_strcat(current_path, "/"), entity);
    else
		  name = ft_strcat(current_path, entity);
	

    stat(name, &buff);
    //For the mode
    mode_select(buff.st_mode, &c);
    printf("%c",c);

    //Permissions
    printf("%s", mode_print(buff.st_mode));

    //st_nlink
    printf("%3i ", buff.st_nlink);

    //User
    printf("%-6s  ", getpwuid(buff.st_uid)->pw_name);

    //User Group
    printf("%-12s", getgrgid(buff.st_gid)->gr_name);

    //Buff size
    printf("%5lld ", buff.st_size);

    //Date
    printf("%.12s ", ctime(&buff.st_mtime) + 4);

    //Name 
    printf("\t%s\n", entity);

}