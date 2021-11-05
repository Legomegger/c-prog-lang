#include <stdio.h>

int main(int argc, char *argv[])
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			printf("%s", "\\t");
		} else if (c == '\b') {
			printf("%s", "\\b");
		} else if (c == '\\') {
			printf("%s", "\\");
		} else {
			printf("%c", c);
		}
	}
}
