#include <stdio.h>
#include <string.h>

int count = 12;

int main(){
	int n;
	scanf("%d", &n);
	int flag = 0;
	char uni[n][22], team[n][22];
	for (int i=0;i<n;i++){
		scanf("%s %s", uni[i], team[i]);
		if (count != 0){
			if(i == 0){
				printf("%s %s\n", uni[i], team[i]);
				count--;
			}
			else{
				for (int j=0; j<i;j++){
					if (strcmp(uni[i], uni[j]) == 0){
						flag = 1;
					}
				}
				if (flag == 0){
					printf("%s %s\n", uni[i], team[i]);
					count--;
				}
				else{
					flag = 0;
				}
			}
		}
	}
	return 0;
}
