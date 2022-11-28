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
	char *cmd = "/bin/echo";
	char *args[] = { cmd, "ECS150", NULL};
	int ret;

	printf("Hi!\n");

	ret = execv(cmd, args);

	printf("Execv returned %d\n", ret);

    return 0;
}
