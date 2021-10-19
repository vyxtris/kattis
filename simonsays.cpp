#include <stdio.h>
#include <string.h>
int main(){
	int N;
	scanf("%d", &N); getchar();
	char says[105];
	int n;
	while (N>0){
		scanf("%[^\n]", says); getchar();
		n = strlen(says);
		int flag = 0;
		if(says[0]=='S' && says[1]=='i' && says[2]=='m' && says[3]=='o' && says[4]=='n' && says[6]=='s' && says[9]=='s'){
			flag = 1;
		}
		if(flag == 1){
			for (int i=11;i<n;i++){
				printf("%c", says[i]);
			}
			printf("\n");
		}
		N--;
	}
	return 0;
}
