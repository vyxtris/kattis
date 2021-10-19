#include <stdio.h>
#define m 99999999
int main(){
	int n, max = m, a, flag = 0;
	scanf("%d", &n);
	for (int i=0;i<n;i++){
		scanf("%d", &a);
		if(a < max) {
			flag = i;
			max = a;
		}
	}
	printf("%d", flag);
}
