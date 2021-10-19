#include <stdio.h>
#include <string.h>
int nodup(char kata[][85], int d1){
	for (int i=0;i<d1-1;i++){
		for (int j=i;j<d1-1;j++){
			if(strcmp(kata[i], kata[j+1]) == 0){
				return -1;
			}
		}
	}
	return 1;
}

int main(){
	int d1 = 0, d2 = 0;
	char a;
	char kata[85][85];
	while(1){
		scanf("%c", &a);
//		printf("%c", a);
		if(a == '\n'){
			d1++;
			break;
		}
		if(a >= 65 && a <= 90){
			kata[d1][d2] = a;
			d2++;
		}
		if(a == 32){
			d1++;
			d2 = 0;
		}
	}
//	for (int i=0;i<d1;i++){
//		printf("%s\n", kata[i]);
//	}
	int res = nodup(kata, d1);
	(res == -1) ? printf("no" ): printf( "yes");
	return 0;
}
