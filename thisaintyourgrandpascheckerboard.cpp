#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	char board[25][25];
	int flag = 1;
	int count_Bx, count_Wx;
	int count_By, count_Wy;
	for (int i=0;i<T;i++){
		scanf("%s", board[i]);
		count_Bx = 0; count_Wx = 0;
		for (int j=0;j<T;j++){
			if (board[i][j] == 'B'){
				count_Bx++;
			}
			if(board[i][j] == 'W'){
				count_Wx++;
			}
		}
		if (count_Bx!=count_Wx){
			flag = 0;
		}
	}
	for (int i=0;i<T-3;i++){
		count_By = 0; count_Wy = 0;
		for (int j=0;j<T-3;j++){
			if (board[j][i] == 'B'){
				count_By++;
			}
			if(board[j][i] == 'W'){
				count_Wy++;
			if (count_By!=count_Wy){
				flag = 0;
			}
			}
			if(board[i][j] == 'B' && board[i][j+1] == 'B' && board[i][j+2] == 'B'){
				flag = 0;
			}
			if(board[i][j] == 'B' && board[i+1][j] == 'B' && board[i+2][j] == 'B'){
				flag = 0;
			}
			if(board[i][j] == 'W' && board[i][j+1] == 'W' && board[i][j+2] == 'W'){
				flag = 0;
			}
			if(board[i][j] == 'W' && board[i+1][j] == 'W' && board[i+2][j] == 'W'){
				flag = 0;
			}
		}
	}
	printf("%d", flag);
	return 0;
}
