#include <stdio.h>
#include <string.h>

int main(){
	int N, T;
	scanf("%d", &N);
	for (int i=0;i<N;i++){
		scanf("%d", &T);
		int count = 0;
		int flag = 0;
		int a;
		char kota[T][25];
		for (int i=0;i<T;i++){
			scanf("%s", kota[i]);
			a = 0;
			int curr= i;
			count = 0;
				while (a<curr){
					if (strcmp(kota[curr],kota[a])==0){
						break;
					}
					else{
						count++;
					}
					a++;
				}
			if(count==i){
				flag++;
			}
		}
		printf("%d\n", flag);
	}
	return 0;
}
