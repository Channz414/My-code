#include <stdio.h>

int main()
{
	int num[6] = {2, 3, 5, 7, 11, 13};
	for (int i = 0; i < 6; i++) {
		printf("Bilangan prima ke-%d: %d\n\n", i, num[i]);
	}
	
	char nama[4] = {'C', 'H', 'A', 'N'};
	for(int i = 0; i < 4; i++) {
	printf("Ejaan ke-%d: %c\n", i, nama[i]);
	}

	return 0;
}


