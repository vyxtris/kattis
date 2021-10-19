#include <stdio.h>

int main(){
	// row, column, vertical, horizontal;
	int r, c, v, h;
	scanf("%d %d %d %d", &r, &c, &v, &h); getchar();
	char a[r][c];
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			scanf("%c", &a[i][j]);
		}
		getchar();
	}
	int ver = v, hor = h;
	for(int i=0;i<r;i++){
		if (ver > 0){
			for (int j=0;j<c;j++){
				if(hor > 0){
					printf("%c", a[i][j]);
					hor--;
					j--;
				}
				else{
					hor = h;
				}
			}
			ver--;
			i--;
			printf("\n");
		}
		else{
			ver = v;
		}
	}
	return 0;
}
