#include <stdio.h>

int main()
{
	int num[6] = {1, 3, 5, 7, 9, 11};
	for (int i = 0; i < 6; i++) {
		printf("Bilangan ganjil ke-%d: %d\n", i, num[i]);
	}

	return 0;
}
