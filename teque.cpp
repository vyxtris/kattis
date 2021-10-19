#include <stdio.h>
#include <string.h>

void give_0(long long int array[], long long int n){
	for (int i=n;i>0;--i){
		array[i] = array[i-1];
	}
}

int hash(char string[]){
	int value = 0;
	for (int i=0;i<strlen(string);i++){
		value += string[i];
	}
	return value;
}

int main(){
	long long int N;
	scanf("%lld", &N); getchar();
	long long int pfront[N];
	long long int pback[N];
	long long int b = 0, f = 0, m = 0;
	for (int i=0;i<N;i++){
		char cmd[15];
		long long int x;
		scanf("%s %lld", cmd, &x);getchar();
		switch (hash(cmd)){
			case 944:{
				pback[b] = x;
				b++;
				break;
			}
			case 1096:{
				pfront[f] = x;
				f++;
				break;
			}
			case 1166:{
				if (b > 0){
					give_0(pback, b);
					pback[0] = m;
					b++;
				}
				m = x;
				break;
			}
			case 320:{
				long long int mid = (b + f) / 2;
				if (x == mid){
					printf("%lld\n", m);
				}
				else if (x < mid){
					printf("%lld\n", pfront[f-x-1]);
				}
				else{
					printf("%lld\n", pback[x-b+1]);
				}
				break;
			}
			default:{
				break;
			}
		}
	}
	return 0;
}
