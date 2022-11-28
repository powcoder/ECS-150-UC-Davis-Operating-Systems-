https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void alarm_handler(int signum)
{
	printf("\nBeep, beep, beep!\n");
}

int main(void)
{
	struct sigaction sa;
	sigset_t ss;

	/* Ignore Ctrl-C */
	sigemptyset(&ss);
	sigaddset(&ss, SIGINT);
	sigprocmask(SIG_BLOCK, &ss, NULL);

	/* Set up handler for alarm */
	sa.sa_handler = alarm_handler;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	sigaction(SIGALRM, &sa, NULL);

	/* Configure alarm */
	printf("Alarm in 5 seconds...\n");
	alarm(5);

	/* Wait until signal is received */
	pause();

	/* Bye, ungrateful world... */
	raise(SIGKILL);

	return 0;
}
