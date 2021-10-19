#include <stdio.h>
#define gc while(getchar()!='\n')

#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, G;
	long long int C, check;
	scanf("%d", &N); gc;
	long long int res[N];
	for(int i=0;i<N;++i){
		check = 0;
		scanf("%d", &G); gc; 
		for (int j=0;j<G;++j){
			scanf("%lld", &C);
			check = check ^ C;
		}
		res[i] = check;
	}
	for (int i=0;i<N;++i){
		printf("Case #%d: %lld\n", i+1, res[i]);
	}
	return 0;	
}
