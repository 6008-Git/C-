#include "stdio.h"
main(){
	int a1,a2;
	char x,y;
	scanf("%d%c%d%c",&a1,&x,&a2,&y);
	printf("%d%c%d%c\n",a1,x,a2,y);	
}

//scanf不用加\n 
//d与c输入之间不用加空格，空格也是一个字符 
//一次输入一个字符 
