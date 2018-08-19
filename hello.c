#include <stdio.h>


int main()
{
	int ary[10]={0};

	for(int i=0; i< 10 ;i++){
		ary[i]=i%5;
		printf("ary[%d]:%d\n",i,ary[i]);
	}

	return 0;
}