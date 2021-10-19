#include <stdio.h>

int memo[1000001];

int fibo(int x){
	if (x <= 2){
		if(x == 0){
			return 0;
		}
		return 1;
	}	
	if (memo[x] != 0 ) return memo[x];
	return memo[x] = fibo(x-1)+fibo(x-2);
}

int main(){
	int x;
	scanf("%d", &x);
	printf("%d %d", fibo(x-1), fibo(x));
	
}
