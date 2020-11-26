#include "paixu.h"

int main(int argc, char **argv)
{
	int arr0[] = {39, 87, 59, 14, 22, 59, 48, 75, 77};
	int arr1[] = {39, 87, 59, 14, 22, 59, 48, 75, 77};
	int arr2[] = {39, 87, 59, 14, 22, 59, 48, 75, 77};
	int *ptrArr[] = {arr0, arr1, arr2,};
	int arrSize = sizeof(arr0)/sizeof(arr0[0]);
	outArr("bubbleSort", "before", *(ptrArr + 0), arrSize);
	bubble_sort(*(ptrArr + 0), arrSize);
	outArr("bubbleSort", "after", *(ptrArr + 0), arrSize);
	outArr("insertSort", "before", *(ptrArr + 1), arrSize);
	insert_sort(*(ptrArr + 1), arrSize);
	outArr("insertSort", "after", *(ptrArr + 1), arrSize);
	outArr("selectSort", "before", *(ptrArr + 2), arrSize);
	select_sort(*(ptrArr + 2), arrSize);
	outArr("selectSort", "after", *(ptrArr + 2), arrSize);

	return 0;
}
