#include "zhan.h"

LinkStack SetNullStack_Link()//创建空链栈
{
	LinkStack top=(LinkStack)malloc(sizeof(struct Node));
	if(top!=NULL)//判断节点是否创建成功
	{
		top->next=NULL;//必须指定头节点为NULL,之后要用头插法插入节点
	}
	else
	{
		printf("alloc failure");//创建头节点失败
	}
	return top;
}
void Push_Link(LinkStack top,DataType x)//进栈，不需要判断链栈是否会溢出
{
	PNode p=(PNode)malloc(sizeof(struct Node));//申请节点空间
	if(p==NULL)
	{
		printf("alloc failure");
	}
	else//相当于链表头插法
	{
		p->data=x;//数据域赋值
		p->next=top->next;//指针域赋值
		top->next=p;//修改栈顶
	}
}
int IsNullStack_Link(LinkStack top)//判断栈是否为空
{
	if(top->next==NULL)
		return 1;
	else
		return 0;
}
void Pop_Link(LinkStack top)//删除栈顶元素，需要判空
{
	PNode p;
	if(top->next==NULL)//判断栈是否为空
		printf("it is empty stack!");
	else
	{
		p=top->next;//p指向待删除的节点
		top->next=p->next;//修改栈顶指针
		free(p);//删除释放节点的空间
	}
}
DataType Pop_Link_Return(LinkStack top)//取栈顶元素
{
	if(IsNullStack_Link(top)==1)//判断栈是否为空
		printf("it is empty stack!");
	else
	{
		return top->next->data;//返回头节点后的第一个节点数据
	}
}
void OctConversion(LinkStack sstack,int n)//实现把八进制的转换
{
	int temp;
	while(n!=0)//n是要被转换的十进制数
	{
		Push_Link(sstack,n%8);//将余数压入栈中
		n=n/8;//下一次循环商当作被除数
		 }
	printf("转换为八进制后的结果为；");
	while(IsNullStack_Link(sstack)!=1)//链栈为空时停止循环
	{
		temp=Pop_Link_Return(sstack);
		printf("%d",temp);
		Pop_Link(sstack);//弹出栈顶元素
	}

}
void HexConversion(LinkStack sstack,int n)//转换为十六进制
{
	int temp;
	while(n!=0)//n是要被转换的十进制数
	{
		temp=n%16;
		switch(temp)//当temp>=10时要进行特殊处理
		{
			case 10:temp='A';break;
			case 11:temp='B';break;
			case 12:temp='C';break;
			case 13:temp='D';break;
			case 14:temp='E';break;
			case 15:temp='F';break;
		}
		Push_Link(sstack,temp);//将元素压入栈中
		n=n/16;
	}
	printf("转换为十六进制的结果为：");
	while(IsNullStack_Link(sstack)!=1)
	{
		temp=Pop_Link_Return(sstack);//遵循后进先出的原则
		if(temp<10)
			printf("%d",temp);
		else
			printf("%c",temp);
		Pop_Link(sstack);
	}
}
