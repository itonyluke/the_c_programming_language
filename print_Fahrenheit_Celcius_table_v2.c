#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Celsius\t Fahrenheit\n");
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr-32);
		printf(" %6.1f\t\t%3.0f\n", celsius, fahr);
		fahr = fahr + step;
	}
	return (0);
}
