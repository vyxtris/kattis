#include <stdio.h>

int main(){
	int P;
	scanf("%d", &P);
	int k, b;
	long long n;
	for (int i=0;i<P;i++){
		long long sum = 0;
		long long curr;
		scanf("%d %d %lld", &k, &b, &n);
		while(n>0){
			curr = n % b;
			sum += curr*curr;
			n /= b;
		}
		printf("%d %lld\n", k, sum);
	}
	
	return 0;
}
