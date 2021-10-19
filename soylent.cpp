#include <stdio.h>
#include <math.h>

int main(){
	int T;
	scanf("%d", &T); getchar();
	for (int i=0;i<T;i++){
		int N;
		scanf("%d", &N); getchar();
		(N%400 == 0) ? printf("%d\n", N/400) : printf("%d\n", (N/400) + 1);
	}
	return 0;
}
