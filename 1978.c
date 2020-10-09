#include <stdio.h>

int main(void) {
	int N, num, cnt = 0;
	scanf("%d", &N);

	int i = 0;
	while(N--!=0){
		scanf("%d", &num);
		for (i = 2; i < num; i++) {
			if (num%i == 0) break;
		}
		if (i == num) cnt++;
		
	}
	printf("%d\n", cnt);
	return 0;
}