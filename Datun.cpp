#include <stdio.h>

int main(){
	int D, M;
	scanf("%d %d", &D, &M);
	for (int i=1;i<M;i++){
		if(i==2){
			D+=28;
		}
		if (i==4||i==6||i==9||i==11){
			D+=30;
		}
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			D+=31;
		}
	}
	int tgl = D%7;
	switch (tgl){
		case 1:{
			printf("Thursday\n");
			break;
		}
		case 2:{
			printf("Friday\n");
			break;
		}
		case 3:{
			printf("Saturday\n");
			break;
		}
		case 4:{
			printf("Sunday\n");
			break;
		}
		case 5:{
			printf("Monday\n");
			break;
		}
		case 6:{
			printf("Tuesday\n");
			break;
		}
		case 0:{
			printf("Wednesday\n");
			break;
		}
	}
}
