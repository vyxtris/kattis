#include <stdio.h>
#define SIZE 100000


int main(){
	int N, re[SIZE], i, sum=0, x, gg,a=0;
	scanf("%d", &N); 
	for (i=0;N/2>0;i++){
		re[i] = N%2;
		N/=2;
	}
	if (N%2==1){
		re[i] = 1;
	}
	for (int j=i;j>=0;j--){
		gg = re[j]*a;
		if (a!=0 && re[j] == 0){
			a++;
			continue;
		}
		else {
		x = 1<<gg;
		sum += x;
		a++;
		}
	}
	
	printf("%d\n", sum);
	return 0;
}
