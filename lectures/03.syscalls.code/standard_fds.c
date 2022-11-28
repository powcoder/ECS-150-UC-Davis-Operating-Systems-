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
	write(STDOUT_FILENO, "Hello ", 6);
	write(1, "Hello ", 6);
	fprintf(stdout, "Hello ");
	printf("Hello\n");

	write(STDERR_FILENO, "World ", 6);
	write(2, "World ", 6);
	fprintf(stderr, "World\n");

	return 0;
}
