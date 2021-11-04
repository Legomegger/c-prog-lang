#include <stdio.h>
#define LOWER 0

void fahr_to_cel(int upper, int step);

int main(int argc, char *argv[])
{
	printf("%3s %6s\n", "Fahr", "Celsius");
	fahr_to_cel(300, 20);
	return 0;
}

void fahr_to_cel(int upper, int step)
{
	for (int lower = LOWER; lower <= upper; lower += step)
		printf("%3d %6.1f\n", lower, (lower - 32) * (5.0 / 9.0));
}

