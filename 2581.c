#include<stdio.h>
int main(void) {
	int n, m, j, sum = 0;
	scanf("%d %d", &n, &m);
	int min = m;
	for (int i = n; i <= m; i++) {
		for (j = 2; j < i; j++) {
			if (i%j == 0) break;
		}
		if (j == i) {
			sum += j;
			if (min > j)
				min = j;
		}
	}
	if (sum == 0)
		printf("-1\n");
	else
		printf("%d\n%d\n", sum, min);
	return 0;
}