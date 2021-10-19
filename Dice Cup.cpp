#include "stdio.h"

int main(){
	int N,M;
	scanf("%d %d", &N, &M);
	int low, high;
	if (N>=M){
		low = M;
		high = N;
	}
	else{
		low = N;
		high = M;
	}
	for (int i=low+1; i<=high+1;i++){
		printf("%d\n", i);
	}
	return 0;
}
