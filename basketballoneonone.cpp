#include <stdio.h>

int main(){
	char a;
	int sia = 0, sib = 0;
	int count = -1;
	while (1){
		a = getchar(); 
//		getchar();
//		printf("%c", a);
//		printf("%d %d", sia, sib);
		if (a == '\n'){
			break;
		}
		switch (a){
			case 'A':{
				count = 0;
				break;
			}
			case 'B':{
				count = 1;
				break;
			}
			case '1':{
				if (count == 0) 
					sia += 1;
				else
					sib += 1;
				break;
			}
			case '2':{
				if (count == 0) 
					sia += 2;
				else
					sib += 2;
				break;
			}
		}
	}
	printf(sia > sib ? "A" : "B" );
	return 0;
}
