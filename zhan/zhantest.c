#include "zhan.h"


int main()
{
	int n,m;
	LinkStack stack;
	stack=SetNullStack_Link();
	printf("输入要转换为八进制数的十进制数：");
	scanf("%d",&n);
	OctConversion(stack,n);
	printf("\n");
	printf("输入要转换为十六进制的十进制数：");
	scanf("%d",&m);
	HexConversion(stack,m);
	printf("\n");
	return 0;
}

