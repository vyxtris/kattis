#include <stdio.h>

int main(){
    int N;
    do {
    scanf("%d", &N);
    int sum = 0, a, b, temp = 0;
    for (int i=0;i<N;i++){
        scanf("%d %d", &a, &b);
		sum += a*(b-temp);
        temp = b;
    }
    if (N != -1){
    printf("%d miles\n", sum);
	}
	else {
		break;
	}
    } while (N != -1);
    return 0;
}
