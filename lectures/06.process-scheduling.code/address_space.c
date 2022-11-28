https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int i = 1;

int main(void)
{
	int j = 10;
	int *k = malloc(sizeof(int));

	*k = 4;

	if (fork()) {
		i = i + 1;
		j = j - 1;
		*k = *k * 1;
	} else {
		i = i + 2;
		j = j - 2;
		*k = *k * 2;
	}

	printf("i=%d, &i=%p\n", i, &i);
	printf("j=%d, &j=%p\n", j, &j);
	printf("k=%d, &k=%p\n", *k, &k);

	return 0;
}


