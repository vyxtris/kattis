#include <stdio.h>

int factor(int x){
		if (x == 1){
			return 1;
		}
		else {
			return (x * factor(x-1));
		}
	}

int main(){
	int N;
	scanf("%d", &N); getchar();
	int a[N], b[N];
	for (int i = 0 ; i < N; i++){
		scanf("%d", &a[i]); getchar();
		b[i] = factor(a[i]);
	}
	for (int i=0; i<N;i++){
		printf("%d\n", b[i]%10);
	}
	return 0;
}
