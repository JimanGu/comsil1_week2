#include "Header.h"

int main() {
	int n;
	while (1) {
		
		int temp = scanf("%d", &n);
		if (n == 0) break;
		else if (n <= MAX) count(n);
		else if (n > MAX) printf("Out of Range");
		else break;
		printf("\n");
		
	}
}


