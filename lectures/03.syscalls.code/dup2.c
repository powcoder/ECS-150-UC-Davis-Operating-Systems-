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

	printf("Hello #1\n");

	fd = open("myfile.txt",
			  O_WRONLY | O_CREAT,
			  0644);
	dup2(fd, STDOUT_FILENO);
	close(fd);

	printf("Hello #2\n");

	return 0;
}
