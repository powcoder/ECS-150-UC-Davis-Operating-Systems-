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
#include <sys/wait.h>

int main(void)
{
	if (fork() > 0)
		/* Forces parent to wait for child
		 * to force scheduling order */
		wait(NULL);

	printf("My PID is %d\n", getpid());
	printf("My parent's PID is %d\n", getppid());

	return 0;
}
