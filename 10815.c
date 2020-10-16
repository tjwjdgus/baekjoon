#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){   
	int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

	if (num1 < num2)   
		return -1;      

	if (num1 > num2)    
		return 1;     

	return 0;   
}

int binary_search(int *arr, int n, int num){
	int start = 0;
	int end = n;
	int mid = (start + end) / 2;
	while (start <= end){
		if (arr[mid] == num)
			return 1;
		else if (arr[mid] < num)
			start = mid + 1;
		else
			end = mid - 1;
		mid = (start + end) / 2;
	}
	return 0;
}

int main(void) {
	int n;
	scanf("%d", &n);
	int *narr = malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++)
		scanf("%d", &narr[i]);
	int m;
	scanf("%d", &m);
	int *marr = malloc(sizeof(int)*m);
	for (int i = 0; i < m; i++)
		scanf("%d", &marr[i]);

	qsort(narr, n, sizeof(int), compare);

	for (int i = 0; i < m; i++) {
		if (binary_search(narr, n, marr[i]))
			printf("1 ");
		else
			printf("0 ");
	}

	free(narr);
	free(marr);
	return 0;
}