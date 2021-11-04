#include <stdio.h>

int main(int argc, char *argv[])
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 100;
	step = 10;
	char *f;
	char *s;
	f = "fahr";
	s = "celsius";

	celsius = lower;
	printf("%6s %3s\n", s, f);
	while (celsius <= upper) {
		fahr = (celsius * (9.0 / 5.0)) + 32.0;
		printf("%6.0f %3.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
