#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	char str[1000000];
	scanf("%s", str);
	int count[26] = { 0, };

	for (int i = 'A'; i <= 'Z'; i++) {
		for (int j = 0; j < strlen(str); j++) {
			if (i == str[j])
				count[i - 'A']++;
		}
	}

	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < strlen(str); j++) {
			if (i == str[j])
				count[i - 'a']++;
		}
	}

	int max = count[0];
	int select = 0;
	for (int i = 1; i < 26; i++) {
		if (max < count[i]) {
			max = count[i];
			select = i;
		}
	}

	int c = 0;

	for (int i = 0; i < 26; i++) {
		if (max == count[i])
			c++;
	}

	if (c > 1)
		printf("?\n");
	else
		printf("%c\n", select + 'A');
	return 0;
}