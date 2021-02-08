#include "stdio.h"
main(){
	int k=5,n=0;
	//do
	while(k>0 && n<5)
	{
		switch(k){
			case1:case3:n+=1;k--;break;
			default:n=0;k--;
			case2:case4:n+=2;k--;break;
		}
	printf("%d\n",n);
	}//while(k>0&&n<5);
}
