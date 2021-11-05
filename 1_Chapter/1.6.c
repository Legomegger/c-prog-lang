#include <stdio.h>

int main(int argc, char *argv[])
{
	int c;

	while ((c = getchar()) != EOF) {
		printf("%d\n", getchar() != EOF);
		putchar(c);
	}
}
