#include <stdio.h>
#define MAXLINE 1000

int getlin(char line[], int maxline);

int main(int argc, char *argv[])
{
	int length, i;
	char line[MAXLINE];

	while((length = getlin(line, MAXLINE)) > 0) {
		i = length - 1;
		while(i >= 0 && (line[i] == ' ' || line[i] == '\t')) {
			--i;
		}
		if (i >= 0) {
			line[i + 1] = '\n';
			line[i + 2] = '\0';
			printf("%s", line);
		}
	}
	return 0;
}

int getlin(char s[], int lim)
{
	int c, i;

	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
