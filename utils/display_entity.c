#include "../includes/b_ls.h"

void				display_entity(char *entity_name, int format)
{
    //char			c;
    struct stat     buff;

    if(format == 0)
        printf("%s\n", entity_name);
    else
    {   
        stat(entity_name, &buff);
        //mode_select(buff, &c);
        //printf("%s%c", CWHITE, c);
        //printf("%s", mode_print(buff.st_mode));
        printf("%3i \t", buff.st_nlink);
        //printf("%-6s  ", getpwuid(buff.st_uid)->pw_name);
        //printf("%-12s", getgrgid(buff.st_gid)->gr_name);
        printf("%5lld \n", buff.st_size);
        //printf("%.20s ", ctime(&buff.st_mtime) + 4);
   }
}