#include <stdio.h>

int main(){
	int n, h, v;
	int a, b;
	scanf("%d %d %d", &n, &h, &v); getchar();
	a = n - h;
	b = n - v;
	if (a>=h && b>=v){
		printf("%d", 4*(a*b));
	}
	if (a>h && b<v){
		printf("%d", 4*(a*v));
	}
	if (a<h && b>v){
		printf("%d", 4*(h*b));
	}
	if(a<h && b<v){
		printf("%d", 4*(h*v));
	}
	return 0;
}
