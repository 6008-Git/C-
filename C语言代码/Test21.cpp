#include "stdio.h"
main(){
	char s[] = {"0ABCDEFG"};
	char *p=s;//数组就是地址，而且代表首地址 
	printf("%#x\n",s);
	printf("%#x\n",p);
	printf("%#x\n",*p);
} 


//int* p = &a;
//p   取a的地址值，即&a 
//*p  取存放在地址里的值，即a 
//&p  取p的地址值 
