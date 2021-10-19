#include <stdio.h>
/*
+---+---+---+---+---+---+---+---+
|.r.|:::|.b.|:q:|.k.|:::|.n.|:r:|
+---+---+---+---+---+---+---+---+
|:p:|.p.|:p:|.p.|:p:|.p.|:::|.p.|
+---+---+---+---+---+---+---+---+
|...|:::|.n.|:::|...|:::|...|:p:|
+---+---+---+---+---+---+---+---+
|:::|...|:::|...|:::|...|:::|...|
+---+---+---+---+---+---+---+---+
|...|:::|...|:::|.P.|:::|...|:::|
+---+---+---+---+---+---+---+---+
|:P:|...|:::|...|:::|...|:::|...|
+---+---+---+---+---+---+---+---+
|.P.|:::|.P.|:P:|...|:P:|.P.|:P:|
+---+---+---+---+---+---+---+---+
|:R:|.N.|:B:|.Q.|:K:|.B.|:::|.R.|
+---+---+---+---+---+---+---+---+
*/

struct white{ // huruf kapital
	int huruf;
	int angka;
}w[16];

struct black{ // huruf kecil
	int huruf;
	int angka;
}b[16];

// address array of struct
// k, q, r1, r2,  b1, b2, n1, n2, p1, p2, p3, p4, p5, p6, p7, p8
// 0, 1,  2,  3,   4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15

int main(){
	int white_k_hrf = 0;
	int white_k_angka = 0;
	int input;
	int kotak_angka[] = {0, 8, 0, 7, 0, 6, 0, 5, 0, 4, 0, 3, 0, 2, 0, 1, 0};
	for (int i=0;i<17;i++){
		for (int j=0;j<33;j++){
			scanf("%d", &input);
			if (input >= 65 && input <= 90){ // white
				if (input == 'K'){
					
				}
				else if (input == 'Q'){
					
				}
				else if (input == 'R'){
					// ada dua
				}
				else if (input == 'B'){
					
				}
				else if (input == 'P'){
					
				}
			}
			else if(input >= 97 && input <= 122) { // black
				
			}
		}
		getchar();
	}
	return 0;
}
