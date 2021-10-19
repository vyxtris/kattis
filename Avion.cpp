#include <stdio.h>
#include <string.h>

int main(){
	char str[15];
	int id[7] = {0};
	int flag;
	int count = 0;
	int a = 0;
	for (int i=0;i<5;i++){
		flag = 0;
		scanf("%s", str);
		int  n = strlen(str);
		for (int j=0;j<n;j++){
			if (str[j] == 'F' && str[j+1] == 'B' && str[j+2] == 'I'){
				flag++;
			}
		}
		if(flag == 1){
			id[i] = i+1;
			count++;
		}
	}
	if(count == 0){
		printf("HE GOT AWAY!\n");
	}
	else{
	for (int i=0;i<5;i++){
		if (id[i]>0){
			printf("%d ", id[i]);
			}
		}
	}
	
	return 0;
}
