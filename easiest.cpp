#include <stdio.h>
#define ll long long

ll sum = 0;

ll rec(ll a){
	if(a == 0){
		return 0;
	}
	sum += (a % 10);
	return rec(a/10);
}


int main(){
	ll N;
	while (1){
		scanf("%lld", &N);
		if (N == 0){
			break;
		}
		rec(N);
		ll curr = sum;
		ll i = 1;
		while (1){
//			printf("%lld %lld\n", curr, sum);
			if(curr == sum && i > 11){
				break;
			}
			else{
				sum = 0;		
			}
			N*=i;
//			printf("%lld\n", N);
			rec(N);
			N/=i;
//			printf("%lld %lld %lld\n", curr, sum, i);
//			Sleep(500);
			i++;
		}
		printf("%lld\n", i-1);
		sum = 0;
	}
	
	
	return 0;
}
