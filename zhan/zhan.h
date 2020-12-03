#ifndef zhan_h
#define zhan_h
 
#include <stdio.h>
#include <stdlib.h>

typedef int DataType;
struct Node
{
	    DataType data;
	        struct Node*next;
};
typedef struct Node*PNode;//节点类型
typedef struct Node*top,*LinkStack;//栈顶和链栈类型

LinkStack SetNullStack_Link();//创建空链栈
void Push_Link(LinkStack top,DataType x);//进栈，不需要判断链栈是否会溢出
int IsNullStack_Link(LinkStack top);//判断栈是否为空
void Pop_Link(LinkStack top);//删除栈顶元素，需要判空
DataType Pop_Link_Return(LinkStack top);//取栈顶元素
void OctConversion(LinkStack sstack,int n);//实现把八进制的转换
void HexConversion(LinkStack sstack,int n);//转换为十六进制

#endif
