#include<stdio.h>
int main(void) {
	int k;
	scanf("%d", &k);
	
	int count = 0;

	while (k > 0) {
		if (k % 5 == 0) {
			k -= 5;
			count++;
		}
		else if (k % 3 == 0) {
			k -= 3;
			count++;
		}
		else if (k > 5) {
			k -= 5;
			count++;
		}
		else if (k > 3) {
			k -= 3;
			count++;
		}
		else {
			printf("-1\n");
			return 0;
		}
	}
	printf("%d\n", count);
	return 0;
}