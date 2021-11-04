#include <stdio.h>
#define LOWER 0
#define STEP 20

int main(int argc, char *argv[])
{
	float fahr;
	int upper;

	printf("%3s %6s\n", "Fahr", "Celsius");
	for (upper = 300; upper >= LOWER; upper -= STEP) {
		printf("%3d %6.1f\n", upper, (5.0 / 9.0) * (upper - 32.0));
	}
}
