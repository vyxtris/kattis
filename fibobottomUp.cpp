#include <stdio.h>

int main(){
	int n = 0; // bilangan fibonacci ke-n
	int a = 1; // bilangan fibo pertama
	int b = 1; // bilangan fibo kedua
	int fibo = 0; // hasil perhitungan fibo
	scanf("%d", &n); 
	if (n <= 1){ 
		fibo = b;
	}
	else{
		for (int i=2;i<n;i++){
			fibo = a + b;
			a = b;
			b = fibo;
		}
	}
	printf("%d\n", fibo);
	return 0;
}
