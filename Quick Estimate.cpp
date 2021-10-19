#include <stdio.h>
#include <string.h>
int main(){
	int N;
	scanf("%d", &N);
	char s[1234];
	while (N>0){
		scanf("%s", s);
		int n = strlen(s);
		printf("%d\n", n);
		N--;
	}
	return 0;
}
