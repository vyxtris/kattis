#include <stdio.h>

int main(){
	int n, t;
	scanf("%d %d", &n, &t);
	int a, flag = 0;
	for (int i=0;i<n;i++){
		scanf("%d", &a);
		t-=a;
		if (t>=0){
			flag++;
		}
	}
	printf("%d", flag);
	return 0;
}
