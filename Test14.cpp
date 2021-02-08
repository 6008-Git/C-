#include"stdio.h"
main(){
	int i,j,m = 1;
	for(i=1;i<3;i++){
		for(j=3;j>0;j--){
			if(i*j>3)
			break;
			m*=i*j;
		}
	}
	printf("%d\n",m);
}  

//break内层，到不了m也改变不了j 
