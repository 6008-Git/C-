#include"stdio.h"
main(){
	int a=0,b=0,c=0;
	c = (a-=++a),(a+=b,b+=4);
	printf("%d%d%d\n",++a,b,c);
}


//++a,a首先自加1 
