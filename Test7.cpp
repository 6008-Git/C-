#include "stdio.h"
main(){
	int a=1,b=2;
	for(;a<8;a++){
		b+=a;
		a+=2;
	}
	printf("%d,%d\n",a,b);
} 

//只有两个变量时刻注意变换
//for循环的a++处才是for循环的最后一句，组成完整的for循环 

