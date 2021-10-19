#include <stdio.h>

int main(){
	int N;
	char B;
	scanf("%d %c", &N, &B);
	int n=N*4;
	char a[n+1][3];
	int sum=0;
	for(int i=0;i<n;i++){
		scanf("%s", a[i]);
		if (a[i][1] == B){
			switch (a[i][0]){
				case 'A':{
					sum += 11;
					break;
				}
				case 'K':{
					sum += 4;
					break;
				}
				case 'Q':{
					sum += 3;
					break;
				}
				case 'J':{
					sum += 20;
					break;
				}
				case 'T':{
					sum += 10;
					break;
				}
				case '9':{
					sum += 14;
					break;
				}
				case '8':{
					sum +=0;
					break;
				}
				case '7':{
					sum += 0;
					break;
				}
			}
		}
		else{
			switch (a[i][0]){
				case 'A':{
					sum += 11;
					break;
				}
				case 'K':{
					sum += 4;
					break;
				}
				case 'Q':{
					sum += 3;
					break;
				}
				case 'J':{
					sum += 2;
					break;
				}
				case 'T':{
					sum += 10;
					break;
				}
				case '9':{
					sum += 0;
					break;
				}
				case '8':{
					sum += 0;
					break;
				}
				case '7':{
					sum += 0;
					break;
				}
			}
		}
	}
	printf("%d\n", sum);
	
	return 0;
}
