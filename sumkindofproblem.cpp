#include <stdio.h>
#define ll long long

ll flag = 0;

ll positive (int n){
	if (n == 0){
		return n;
	}
	return n + positive(n-1);
}

ll odd (int n){
	if (flag == 1){
		return n;
	}
	flag--;
	return n + odd(n+2);
}

ll even (int n){
	if (flag == 1){
		return n;
	}
	flag--;
	return n + even(n+2);
}

int main(){
	int P;
	scanf("%d", &P);
	ll K, N;
	ll p[P], o[P], e[P];
	for (int i=0;i<P;i++){
		scanf("%lld %lld", &K, &N);
		p[i] = positive(N);
		flag = N;
		o[i] = odd(1);
		flag = N;
		e[i] = even(2);
		printf("%lld %lld %lld %lld\n", K, p[i], o[i], e[i]);
	}
	return 0;
}
