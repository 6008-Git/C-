#include "stdio.h"
main(){
	char s[] = {"0ABCDEFG"};
	char *p=s;//������ǵ�ַ�����Ҵ����׵�ַ 
	printf("%#x\n",s);
	printf("%#x\n",p);
	printf("%#x\n",*p);
} 


//int* p = &a;
//p   ȡa�ĵ�ֵַ����&a 
//*p  ȡ����ڵ�ַ���ֵ����a 
//&p  ȡp�ĵ�ֵַ 
