#include <stdio.h>

#define END 0.00

int min_cards(float);

int main(int argc, char *argv[])
{
	float len;

	while (1) {
		scanf("%f", &len);
		if (len == END)
			break;
		printf("%d card(s)\n", min_cards(len));
	}

	return 0;
}

int min_cards(float len)
{
	int i = 1;
	float sum = 0;

	while (sum < len) {
		sum += 1.0/++i;
	}

	return i-1;
}
