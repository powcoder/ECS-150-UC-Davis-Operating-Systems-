https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int fd[2];
	char send[7] = "Hello!";
	char recv[7];

	pipe(fd);
	printf("fd[0] = %d\n", fd[0]);
	printf("fd[1] = %d\n", fd[1]);

	write(fd[1], send, 7);

	read(fd[0], recv, 7);
	puts(recv);

	return 0;
}
