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


//continue֮�󵽵���for��ִ����for�����һ��a--���ٽ�for������������ 
