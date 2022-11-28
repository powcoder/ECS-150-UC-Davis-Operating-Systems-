https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int fd1, fd2;

	fd1 = open("file_101.c", O_RDONLY);
	fd2 = open("file_201.c", O_RDWR);

	printf("fd1 = %d\n", fd1);
	printf("fd2 = %d\n", fd2);

	close(fd1);
	fd1 = open("file_201.c", O_WRONLY);
	printf("fd1 = %d\n", fd1);

	close(fd1);
	close(fd2);
	return 0;
}
