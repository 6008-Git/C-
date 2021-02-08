#include"stdio.h"
main(){
	char ch1,ch2;
	ch1 = 'A'+8-4;
	//ch1 = 'A'+'8'-'4';
	ch2 = 'A'+'8'-'5';
	printf("%c%d\n",ch1,ch2);
} 



//'8'代表56，碰巧'8'-'4'与8-4得到的值一样 
