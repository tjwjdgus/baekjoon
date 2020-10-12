#include<stdio.h>
#include<stdlib.h>

long long int fib(int n) {
	long long int a[91];//long long : -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807(%lld)
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i <= n; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	return a[n];
}

int main(void) {
	int n;
	scanf("%d", &n);
	
	printf("%lld\n", fib(n));
	return 0;
}