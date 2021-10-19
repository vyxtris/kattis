#include <stdio.h>

int main(){
	int T = 1;
	int a = 1;
	while(T != 0 ){
		scanf("%d", &T);
		if(T == 0){
			break;
		}
		char arr[T][30];
		int mundur = T-1;
		int maju = 0;
		for (int i=0;i<T;i++){
			if(i%2==0){
//				printf("%d\n", maju);
				scanf("%s", arr[maju]);getchar();
				maju++;
			}
			else{
//				printf("%d\n", mundur);
				scanf("%s", arr[mundur]);getchar();
				mundur--;
			}
		}
		printf("SET %d\n", a);
		for (int i=0;i<T;i++){
			printf("%s\n", arr[i] );
		}
		a++;
	}
	return 0;
}
