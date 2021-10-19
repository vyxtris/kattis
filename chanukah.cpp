#include <stdio.h>
#define li long int

li flag = 0;

int recur(li a){
	if (a > 0){
		flag += a;
		return recur(a-1);
	}
}

int main(){
	li P;
	scanf("%ld", &P);
	li K, N;
	li res[P];
	for (int i=0;i<P;i++){
		flag = 0;
		scanf("%ld %ld", &K, &N);
		flag += N;
		recur(N);
		res[K-1] = flag;
	}
	for (int i=0;i<P;i++){
		printf("%ld %ld\n", i+1, res[i]);
	}
	return 0;
}
