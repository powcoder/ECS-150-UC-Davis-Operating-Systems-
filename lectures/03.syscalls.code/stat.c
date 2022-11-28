https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main(int argc, char *argv[])
{
    struct stat sb;

    stat(argv[1], &sb);

    printf("File type:          ");
    switch (sb.st_mode & S_IFMT) {
        case S_IFDIR:  printf("directory\n");    break;
        case S_IFREG:  printf("regular file\n"); break;
        default:       printf("other\n");        break;
    }
    printf("Mode:               %lo (octal)\n",
           (unsigned long) sb.st_mode);
    printf("File size:          %lld bytes\n",
           (long long) sb.st_size);
    printf("Last file access:   %s",
           ctime(&sb.st_atime));

    return 0;
}
