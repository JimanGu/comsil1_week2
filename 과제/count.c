#include "Header.h"
void count(int n) {
	int _count[10] = { 0, };
	int i, rest, result;

	for (i = 1; i <= n; i++)
	{
		rest = i;
		while (rest > 0) {
			result = rest - (rest / 10) * 10;
			_count[result]++;
			if ((rest / 10) <= 0) break;
			rest /= 10;
		}

	}
	print_array(_count);

}
