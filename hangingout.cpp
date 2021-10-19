#include <stdio.h>

int main(){
	int L, x;
	scanf("%d %d", &L, &x);
	int sum = 0, curr, flag = 0;
	char a[6];
	for (int i=0;i<x;i++){
		scanf("%s %d", a, &curr);
		if(a[0] == 'e'){
			if(sum + curr > L){
				flag++;
			}
			else{
				sum += curr;
			}
		}
		else if(a[0] == 'l'){
			sum-=curr;
		}
	}
	printf("%d", flag);
	return 0;
}
