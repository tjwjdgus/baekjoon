#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int *arr = malloc(sizeof(int) * 1000000);// n <= 500000 이므로 맨 앞 다음 장이 뒤로 넘어갈 자리를 만들어 주기 위해 500000의 두배 

	for (int i = 1; i <= n; i++)
		arr[i] = i;

	if (n == 1)
		printf("1");
	
	int start = 1;
	while (start!=n) {
		arr[start] = 0;
		start++;
		if (start == n) {
			printf("%d", arr[start]);
			break;
		}
		n++;
		arr[n] = arr[start];
		arr[start] = 0;
		start++;
	}
	free(arr);
	return 0;
}