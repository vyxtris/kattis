#include <stdio.h>
int main(){
	int tgl;
	char bln[3];
	scanf("%s %d", bln, &tgl);
	if (bln[0] == 'D' && tgl == 25)
		printf("yup");
	else if (bln[0] == 'O' && tgl == 31)
		printf("yup");
	else
		printf("nope");
	return 0;
}
