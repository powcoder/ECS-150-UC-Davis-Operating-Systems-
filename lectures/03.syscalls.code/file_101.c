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
	int fd;
	char c;

	fd = open("file_101.c", O_RDONLY);

	read(fd, &c, 1);
	printf("%c\n", c);
	read(fd, &c, 1);
	printf("%c\n", c);

	lseek(fd, -2, SEEK_END);
	read(fd, &c, 1);
	printf("%c\n", c);

	close(fd);
	return 0;
}
