#include <stdio.h>

int main(int argc, char *argv[])
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t' || c == ' ' || c == '\n') {
			printf("\n");
		} else
			printf("%c", c);
	}
}
