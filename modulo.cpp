#include <stdio.h>

int main(){
	int val[42] = {0};
	int in, sum=0;
	for (int i=0;i<10;i++){
		scanf("%d", &in);
		val[in%42]++;
	}
	for (int i=0;i<42;i++){
		if(val[i]>0){
			sum++;
		}
	}
	printf("%d", sum);
	
	return 0;
}
