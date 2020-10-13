#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int kg;
	int cm;
}Person;

int main(void) {
	int n;
	scanf("%d", &n);
	Person *p = malloc(sizeof(Person)*n);

	for (int i = 0; i < n; i++)
		scanf("%d %d", &p[i].kg, &p[i].cm);

	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (p[i].kg < p[j].kg&&p[i].cm < p[j].cm)
				count++;
		}
		printf("%d ", count+1);
	}
	return 0;
}