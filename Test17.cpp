#include"stdio.h"
main(){
	int a=1,b=2,c=3;
	if(a>b){
		c=a,a=b,b=c;
	}
	printf("%d%d%d\n",a,b,c);
}
