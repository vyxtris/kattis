#include <stdio.h>

long long int flag = 0;

void harshad(long long int n){
	if (n <= 0){
		return ;
	}
	flag += (n%10);
	harshad(n/10);
}

int main(){
	long long int n;
	scanf("%lld", &n);
	while (1){
		flag = 0;
		harshad(n);
		if(n % flag == 0){
			break;
		}
		n++;
	}
	printf("%lld", n);
	return 0;
}
