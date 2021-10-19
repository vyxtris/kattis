#include <stdio.h>

int main(){
    long long int N , x=0;
    scanf("%lld", &N); getchar();
    int P[N];
    long long int b = 0;
    for (int i =0; i< N;i++){
        scanf("%d", &P[i]);
    }
    for (int j = 0; j<N;j++){
        long int a = 1;
        int x, y;
        x = P[j] / 10;
        y = P[j] - (x*10);
        while(y > 0){
            a *= x;
            y--;
        }
        b += a;
    }
    printf("%lld", b);
    return 0;
}
