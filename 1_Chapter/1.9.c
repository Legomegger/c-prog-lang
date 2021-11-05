#include <stdio.h>

int main(int argc, char *argv[])
{
	int c, previous_c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' && previous_c == ' ') {
			continue;
		}
		previous_c = c;
		printf("%c", c);
	}
}
