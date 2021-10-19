#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int a, b;
	int x[365] = {0};
	int max = 0;
	for (int i=0;i<T;i++){
		scanf("%d %d", &a, &b);
		if (max<b) max = b;
		for (a; a<=b; a++){
			if (x[a] == 0){
				x[a]++;
			}
			else{
				continue;
			}
		}
	}
	int flag = 0;
	for (int i=0;i<=max; i++){
		if (x[i] > 0){
			flag++;
		}
	}
	printf("%d", flag);
	return 0;
}
