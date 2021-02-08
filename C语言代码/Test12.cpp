#include "stdio.h"
main(){
	int a = 8;
	for(;a>0;a--){
		if(a%3){
			printf("%d\n",a--);
			continue; 
		}
		printf("%d\n",--a);
	}
}


//continue之后到的是for，执行完for的最后一句a--，再进for！！！！！！ 
