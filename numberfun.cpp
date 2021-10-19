#include <stdio.h>

int tambah(float a, float b, float c){
	float x = a+b;
	if (c == x) return 1;
	else return 0;
}

int kurang(float a, float b, float c){
	int x = (a>b) ? a-b : b-a;
//	(a>b) ? x = a-b : x = b-a;
	if (c == x) return 1;
	else return 0;
}

int kali(float a, float b, float c){
	float x = a*b;
	if (c == x) return 1;
	else return 0;
}

int bagi(float a, float b, float c){
	float x = (a>b) ? a/b : b/a;
//	(a>b) ? x = a/b : x = b/a;
	if (c == x) return 1;
	else return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	float a, b, c, sum, flag;
	for (int i=0;i<n;i++){
		flag = 0;
		scanf("%f %f %f", &a, &b, &c);
		flag += tambah(a,b,c);
		flag += kurang(a,b,c);
		flag += kali(a,b,c);
		flag += bagi(a,b,c);
		if (flag > 0){
			puts("Possible");
		}
		else{
			puts("Impossible");
		}
	}
	return 0;
}
