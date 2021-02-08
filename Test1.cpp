#include "stdio.h"
main(){
	int b=10,a=-11;
	a%=b%=4;
	printf("%d,%d\n",a,b);
} 

//简写运算符   如a+=1     a=a+1
//复合运算     从右到左 
