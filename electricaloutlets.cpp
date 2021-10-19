#include <stdio.h>

int main(){
	int N, K;
	scanf("%d", &N);
	for (int i=0;i<N;i++){
		scanf("%d", &K);
		int sum = 0, o;
		for (int j=0;j<K;j++){
			scanf("%d", &o);
			sum += o;
		}
		printf("%d\n", sum-K+1);
	}
	
	return 0;
}
