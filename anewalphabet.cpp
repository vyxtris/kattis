#include <stdio.h>

int main(){
	char c = ' ';
	while(c != '\n'){
		int flag = 0;
		scanf("%c", &c);
		if (c>=65 && c<=90){
			c+=32;
		}
		switch (c){
			case 'a':{
				printf("@");
				break;
			}
			case 'b':{
				printf("8");
				break;
			}
			case 'c':{
				printf("(");
				break;
			}
			case 'd':{
				printf("|)");
				break;
			}
			case 'e':{
				printf("3");
				break;
			}
			case 'f':{
				printf("#");
				break;
			}
			case 'g':{
				printf("6");
				break;
			}
			case 'h':{
				printf("[-]");
				break;
			}
			case 'i':{
				printf("|");
				break;
			}
			case 'j':{
				printf("_|");
				break;
			}
			case 'k':{
				printf("|<");
				break;
			}
			case 'l':{
				printf("1");
				break;
			}
			case 'm':{
				printf("[]\\/[]");
				break;
			}
			case 'n':{
				printf("[]\\[]");
				break;
			}
			case 'o':{
				printf("0");
				break;
			}
			case 'p':{
				printf("|D");
				break;
			}
			case 'q':{
				printf("(,)");
				break;
			}
			case 'r':{
				printf("|Z");
				break;
			}
			case 's':{
				printf("$");
				break;
			}
			case 't':{
				printf("']['");
				break;
			}
			case 'u':{
				printf("|_|");
				break;
			}
			case 'v':{
				printf("\\/");
				break;
			}
			case 'w':{
				printf("\\/\\/");
				break;
			}
			case 'x':{
				printf("}{");
				break;
			}
			case 'y':{
				printf("`/");
				break;
			}
			case 'z':{
				printf("2");
				break;
			}
			default:{
				printf("%c", c);
				break;
			}
		}
	}
	return 0;
}
