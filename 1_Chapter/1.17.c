#include <stdio.h>
#define MINCOUNT 10
#define MAXTEXT 10000
#define MAXLINE 1000

int getlin(char line[], int maxline);
int append(char result[], char to[], int length, int index);
void copy(char to[], char from[]);

int main(int argc, char *argv[])
{
	int length, max, index;
	char line[MAXLINE];
	char result[MAXTEXT];

	index = 0;

	while((length = getlin(line, MAXLINE)) > 0) {
		if (length < MINCOUNT) {
			continue;
		} else {
			printf("%s\n", result);
			index = append(result, line, length, index);
		}
	}
	printf("%s\n", result);
	return 0;
}

int append(char result[], char line[], int length, int index)
{
	printf("%s %s %s %s\n", "res", "line", "leng", "index");
	printf("%s %s %d %d\n", result, line, length, index);
	int i;
	for(i = 0; i < length - 1; ++i) {
		result[index] = line[i];
		++index;
	}
	return index;
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
