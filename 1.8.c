#include <stdio.h>

int main(int argc, char *argv[])
{
	int c, newline_count, tab_count, space_count;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			newline_count++;
		} else if (c == ' ') {
			space_count++;
		} else if (c == '\t') {
			tab_count++;
		}
	}
	printf("%s %s %s\n", "newlines", "tabs", "spaces");
	printf("%d %d %d\n", newline_count, tab_count, space_count);
}
