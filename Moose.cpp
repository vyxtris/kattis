#include <stdio.h>

int main(){
	int left, right;
	scanf("%d %d", &left, &right);
	if(left>0||right>0){
		if(left == right){
			printf(" Even %d", left+right);
		}
		if(left>right){
			printf("Odd %d", left*2);
		}
		if(left<right){
			printf("Odd %d", right*2);
		}
	}
	else{
		printf("Not a moose");
	}
	
	return 0;
}
