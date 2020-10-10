#include<stdio.h>
int main(void) {
	while (1) {
		int n, m;
		scanf("%d %d", &n, &m);
		if (n != 0 && m != 0) {
			if (m%n == 0)
				printf("factor\n");
			else if (n%m == 0)
				printf("multiple\n");
			else
				printf("neither\n");
		}
		else
			return 0;
	}
}