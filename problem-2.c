#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int tmp = 0;
	while (a <= 4000000)
	{
		tmp = a + b;
		a = b;
		b = tmp;
	}
	printf("%d\n", (b - 1) / 2);
	return 0;
}
