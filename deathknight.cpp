#include <stdio.h>

int main(){
	int n, sum = 0;
	scanf("%d", &n); getchar();
	for (int i=0;i<n;i++){
		char c[1005];
		int a = 0;
		int flag = 0;
		do{
			scanf("%c", &c[a]);
			if(c[a] == 'C' || c[a] == 'D' || c[a] == 'O'){
			}
			else{
				break;
			}
			if (c[a] == 'D' && c[a-1] == 'C'){
				flag = 1;
			}
			a++;
		}while (1);
		if(flag == 0){
			sum++;
		}
	}
	printf("%d", sum);
	return 0;
}
