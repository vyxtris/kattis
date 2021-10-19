#include <stdio.h>

int main(){
	int a, b;
	while (1){
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0){
			break;
		}
		if (a+b == 13){
			printf("Never speak again.\n");
			continue;
		}
		if (a>b){
			printf("To the convention.\n");
			continue;
		}
		if (a<b){
			printf("Left beehind.\n");
			continue;
		}
		if (a == b){
			printf("Undecided.\n"); continue;
		}
	}
	return 0;
}
