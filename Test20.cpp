#include "stdio.h"
main(){
	int x,y,z;
	x=y=1;
	z = (x++,y++,++y);//������������֮��  
	printf("%d\n",z);
}
