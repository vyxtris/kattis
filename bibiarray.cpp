#include <stdio.h>

/*
3
8
1 1 2 2 3 4 5 5
8
5 5 4 3 2 2 1 1
4
1 1 1 3
*/


int main(){
	int T;
	int N;
	scanf("%d", &T); getchar();
	for (int i=0;i<T;i++){
		scanf("%d", &N); getchar();
		int max_array = 0;
		int X[N+5];
		int array[200005] = {0};
		int sorted[200005] = {0};
//		printf("max_array=%d\n", max_array);
		//scan dulu cari max_array
		for (int j=0;j<N;j++){
			scanf("%d", &X[j]); getchar();
			array[X[j]]++;
//			printf("array=%d x[j]=%d\n", array[X[j]], X[j]);
			if (array[X[j]] > max_array){
				max_array = array[X[j]];
			}
		}
		
		//sortir
		for (int j=0;j<N;j++){
			if (array[X[j]] == max_array){
				if (sorted[X[j]] == 0){
					sorted[X[j]] = 1;
				}	
			}
		}
		
		//print
		printf("Case #%d: %d\n", i+1, max_array);
		for (int j=0;j<N;j++){
			if (sorted[j] == 1){
				printf("%d ", j);
			}
		}
		printf("\n");
	}
	return 0;
}
