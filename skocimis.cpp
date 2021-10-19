#include <stdio.h>

int main(){
	int A, B, C;
	int count = 0;
	scanf("%d %d %d", &A, &B, &C);
	if (B - A > C - B){
		count = B - A - 1;
	}
	else{
		count = C - B - 1;
	}
	printf("%d\n", count);
	return 0;
}
