#include <stdio.h>
#define li long int

int main(){
	li N, Q;
	scanf("%ld %ld",&N, &Q);
	li X[N];
	for (li i=0;i<N;i++){
		scanf("%ld", &X[i]);
	}
	li a,b,c;
	for (li i=0;i<Q;i++){
		scanf("%ld %ld %ld", &a, &b, &c);
		if (a == 1){
			X[b-1] = c;
		}
		else{
			li res = X[b-1] - X[c-1];
			if (res >= 0){
				printf("%ld\n", res);
			}
			else{
				printf("%ld\n", res*-1);
			}
		}
	}
	return 0;
}
