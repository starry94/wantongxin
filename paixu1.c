#include "paixu.h"

void outArr(char* name, char* time, int arr[], int arrSize){
	printf("%s %s is: \n", name, time);
	for(int i = 0; i < arrSize; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");

	return;
}

void bubble_sort(int *a, int n) {
	for(int i=0;i<n;i++){
	for(int j=0; j<n-i; j++) {
		if(a[j]>a[j+1]) {
			swap(a[j],a[j+1]);  //交换数据            
			}
		}
	}	
}
//冒泡排序


void select_sort(int a[],int n){
	int temp;
	for(int i=0;i<n-1;i++){
		temp=i;      //利用一个中间变量temp来记录需要交换元素的位置
		for(int j=i+1;j<n;j++){
			if(a[temp]>a[j]){//选出待排数据中的最小值                
				temp=j;         
			}
		}       
		swap(a[i],a[temp]); //交换函数   
	}
}//选择排序

void insert_sort(int a[],int n){
	int i,j;//外层循环标识并决定待比较的数值
	for(i=1; i<n; i++) { //循环从第2个元素开始
		if(a[i]<a[i-1]) {
			int temp=a[i];//待比较数值确定其最终位置
			for(j=i-1; j>=0 && a[j]>temp; j--) {
				a[j+1]=a[j];          
			}
			a[j+1]=temp;//此处就是a[j+1]=temp;       
		}
	}
}//插入排序
