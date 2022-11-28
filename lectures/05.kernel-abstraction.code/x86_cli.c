https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <stdio.h>

int main(void)
{
	printf("Hello!\n");

	/* Try deactivating
	 * hardware interrupts */
	asm ("cli" ::: "memory");

	while (1)
		printf("I win?\n");

	return 0;
}
