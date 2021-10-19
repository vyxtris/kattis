#include <stdio.h>
#include <string.h>

int main(){
	char string[15010];
	scanf("%s", string);
	int len = strlen(string);
	int half = len / 2;
	int kiri = 0, kanan = 0;	
	for (int i=0;i<half;++i){
		kiri = kiri + string[i];
		kiri %= 65;
//		printf("kiri %d\n", kiri);
		kanan = kanan + string[half+i];
		kanan %= 65;
//		printf("kanan %d\n", kanan);
	}
	kiri %= 26;
	kanan %= 26;
	for (int i=0;i<half;i++){ //kacau
		string[i] += kiri;
		if (string[i] > 90){
			string[i] %= 91;
			string[i] += 65;
		}
		string[half+i] += kanan;
		if (string[half+i] > 90){
			string[half+i] %= 91;
			string[half+i] += 65;
		}
	}
	char kata[7505];
	for (int i=0;i<half;i++){
		kata[i] = string[i] + string[half+i];
		if (kata[i] > 90){
			kata[i] %= 91;
			kata[i] += 65;
		}
	}
	printf("%s", kata);
	return 0;
}
