
#include<stdio.h>
int stringcompare(char *s1, char *s2) {
	int i=0;
	while(s1[i] == s2[i] && s1[i] && s2[i]) {
		i++;
	}
	return s1[i] - s2[i];
}
int main() {
	printf("%d", stringcompare("Hello", "Hallo"));
	printf("%d", stringcompare("b", "b"));
	return 0;
}

