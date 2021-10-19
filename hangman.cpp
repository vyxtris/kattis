#include <stdio.h>
#include <string.h>

int main(){
	char soal[20];
	char key[28];
	scanf("%s", soal);
	scanf("%s", key);
	int a = strlen(soal);
	int b = strlen(key);
	//
	int check[26] = {0};
	for (int i=0;i<a;i++){
		check[soal[i]%65]++;
	}
	int lives = 10, res = 0;
	for (int i=0;i<26;i++){
		if(check[i] > 0){
			res++;
		}
	}
//	printf("%d\n", res);
	//
	int sum = 0;
	for (int i=0;i<b;i++){
		int flag = 0;
//		printf("%d %d %d\n", sum, res, lives);
		if (sum == res && lives > 0){
			puts("WIN");
			break;
		}
		else if (lives == 0 && sum < res){
			puts("LOSE");
			break;
		}
		for (int j=0;j<a;j++){
			if (soal[j] == key[i]){
				flag = 1;
			}
		}
		if (flag == 1){
			sum++;
		}
		else{
			lives--;
		}
	}
	return 0;
}
