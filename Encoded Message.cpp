#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	int T;
	scanf("%d", &T);
	for (int i=0;i<T;i++){
		char s[10005];
		char t[105][105];
		scanf("%s", s);
		int n = strlen(s);
		int x = sqrt(n);
		int a, b = x-1;
		for (int j=0;j<x;j++){
			a = b;
			for (int k=0;k<x;k++){
				t[j][k] == s[a];
				printf("%c", s[a]);
				a+=x;
			}
			b--;
		}
		printf("\n");
	}
	return 0;
}
