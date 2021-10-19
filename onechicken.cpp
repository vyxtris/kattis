#include <stdio.h>

int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	if(M>N) 
	{
		(M-N == 1) ? printf("Dr. Chaz will have %d piece of chicken left over!", M-N) : printf("Dr. Chaz will have %d pieces of chicken left over!", M-N); 
	}
	else{
		(N-M == 1) ? printf("Dr. Chaz needs %d more piece of chicken!", N-M) : printf("Dr. Chaz needs %d more pieces of chicken!", N-M);
	}
		
	return 0;
}
