#include<stdio.h>
#include<math.h>

int main(void) {
	while (1) {
		int n[3];
		for (int i = 0; i < 3; i++)
			scanf("%d", &n[i]);
		
		if (n[0] == 0 && n[1] == 0 && n[2] == 0)
			return 0;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 2 - i; j++) {
				if (n[j] > n[j + 1]) {
					int temp = n[j];
					n[j] = n[j + 1];
					n[j + 1] = temp;
				}
			}
		}

		int result = sqrt(pow(n[0], 2) + pow(n[1], 2));
		if (result == n[2])
			printf("right\n");
		else
			printf("wrong\n");
	}
}