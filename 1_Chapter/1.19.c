#include <stdio.h>
#define MAXLINE 1000

int getlin(char line[], int maxline);
void reverse(char in[]);
int get_line_length(char string[]);
void copy(char to[], char from[]);

int main(int argc, char *argv[])
{
	int length, i;
	char line[MAXLINE];
	char result[MAXLINE];

	while((length = getlin(line, MAXLINE)) > 0) {
		reverse(line);
		printf("%s\n", line);
	}
	return 0;
}

void reverse(char in[])
{
	int line_length, i;
	line_length = get_line_length(in);
	char tmp[line_length];
	copy(tmp, in);
	i = 0;
	for(; line_length >= 0; --line_length) {
		in[i] = tmp[line_length];
		++i;
	}
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}

int get_line_length(char string[])
{
	int i;
	while(string[i] != '\n')
		++i;
	return i;
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
