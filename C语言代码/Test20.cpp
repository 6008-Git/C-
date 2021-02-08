#include "stdio.h"
main(){
	int x,y,z;
	x=y=1;
	z = (x++,y++,++y);//不加括号天壤之别  
	printf("%d\n",z);
}
