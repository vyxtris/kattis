#include <stdio.h>

int main(){
	int n;
	int a = 1, b=1, flag=1;
	scanf("%d", &n);
	while (b < n){
		b = a*2;
		a = b;
		flag++;
	}
	printf("%d", flag);
	return 0;
}
