#include<stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		if (n / i == 0)
			break;
		else {
			if (n%i == 0) {
				n /= i;
				printf("%d\n", i);
				i--;
			}
		}
	}
	return 0;
}