#include "stdio.h"
int main(){
	int a=1,b=2,c=3,d=0;
	if(a==1 && b++==2)                    //if�ж��ڵĴ���ִ�� 
		if(b!=2||c--!=3)                  //ע��˫�� 
			printf("%d,%d,%d\n",a,b,c);   //if���ٽ�else��� 
		else 
			printf("%d,%d,%d\n",a,b,c);
	else
			printf("%d,%d,%d\n",a,b,c);
	return 0;	
}

//aû�����κ���������   a==1 
//b++��2��b++��               b==3 
//˫��   ǰ����ȷ��ִ�к������   c==3
//1��3��3 
