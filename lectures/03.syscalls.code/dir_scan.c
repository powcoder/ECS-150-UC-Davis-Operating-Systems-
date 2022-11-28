https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <dirent.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char cwd[PATH_MAX];
    DIR *dirp;
    struct dirent *dp;

    getcwd(cwd, sizeof(cwd));
    printf("Change CWD from '%s' to '%s'\n",
           cwd, argv[1]);
    chdir(argv[1]);

    dirp = opendir(".");
    while ((dp = readdir(dirp)) != NULL)
        printf("Entry: %s\n", dp->d_name);
    closedir(dirp);

    return 0;
}
