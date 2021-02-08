#include "stdio.h"
int main(){
	int a=1,b=2,c=3,d=0;
	if(a==1 && b++==2)                    //if判断内的代码执行 
		if(b!=2||c--!=3)                  //注意双或 
			printf("%d,%d,%d\n",a,b,c);   //if与临近else配对 
		else 
			printf("%d,%d,%d\n",a,b,c);
	else
			printf("%d,%d,%d\n",a,b,c);
	return 0;	
}

//a没进行任何算术运算   a==1 
//b++是2，b++后               b==3 
//双或   前者正确则不执行后续语句   c==3
//1，3，3 
