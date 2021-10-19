#include <stdio.h>

int main(){
	long long int a = 1, b = 1, mod, div;
	while (1){
	scanf("%lld%lld", &a, &b);
	if(a == 0 && b == 0){
		break;
	}
	mod = a%b;
	div = a/b;
	printf("%lld %lld / %lld\n", div, mod, b);
	}
	return 0;
}
