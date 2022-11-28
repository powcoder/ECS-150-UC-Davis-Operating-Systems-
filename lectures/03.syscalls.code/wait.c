https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid;

	pid = fork();
	if (pid != 0) {
		/* Parent */
		int status;
		wait(&status);
		/* == waitpid(pid, &status, 0) */
		printf("Child returned %d\n",
			   WEXITSTATUS(status));
	} else {
		/* Child */
		printf("Will exit soon!\n");
		exit(42);
	}

    return 0;
}
