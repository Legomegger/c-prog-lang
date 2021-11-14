#include <stdio.h>
#define TAB 4

int main(int argc, char *argv[])
{
	int c, char_count, times;
	char_count = 0;
	while((c = getchar()) != EOF) {
		if (c == '\t') {
			times = TAB - (char_count % TAB);
			while(times > 0) {
				putchar(' ');
				--times;
				++char_count;
			}
		} else {
			putchar(c);
			++char_count;
		}
	}
}
