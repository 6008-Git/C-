#include "stdio.h"
main(){
	int x=1,y=0,a=0,b=0;
	switch(x){
		case 1:switch(y){
			case 0:a++;break;
			case 1:b++;break;
		}
		case 2:a++;b++;break;
		case 3:a++;b++;break; 
	}
	printf("%d,%d",a,b);
} 



//在遇到break之前，case x 会一直往下运行 
