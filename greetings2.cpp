#include <stdio.h>
#include <string.h>

int main(){
	char kata[1005];
	scanf("%[^\n]", kata);getchar();
	if (strcmp(kata,"Later") == 0){
		puts("Alligator!");
	}
	else{
		int len = strlen(kata);
		printf("%c",kata[0]);
		for (int j=0;j<2;j++){
			for (int i=1;i<len-1;i++){
				printf("%c",kata[i]);
			}
		}
		printf("%c\n", kata[len-1]);
	}
	return 0;
}
