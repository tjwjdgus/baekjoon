#include<stdio.h>
int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	int gcf, lcm;//최대공약수, 최소공배수
	int i = (n > m) ? m : n;
	for (; ; i--) {
		if (n%i == 0 && m%i == 0) {
			gcf = i;
			break;
		}
	}
	int j= (n > m) ? n : m;
	int k;
	for (k=j ; ; k++) {
		if (k%n == 0 && k%m == 0) {
			lcm = k;
			break;
		}
	}
	printf("%d\n%d\n", gcf, lcm);
	return 0;
}