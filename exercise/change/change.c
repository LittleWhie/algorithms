#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char *argv[])
{
	int i = 0, money;
	int v[N] = {20,10,5,2,1};
	
	if (argc != 2) {
		printf("usage : %s money(int)\n", argv[0]);
		exit(0);
	}
	
	money = atoi(argv[1]);
	while (i < N) {
		int n = money/v[i];
		if (n != 0) {
			printf("value %2d , nums : %2d\n", v[i], n);
		}
		money = money%v[i++];
	}

	return 0;
}
