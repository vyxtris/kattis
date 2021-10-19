#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf(b&1 ? "Impossible\n" : "Possible\n");
	
	return 0;
}
