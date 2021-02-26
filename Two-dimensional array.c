#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//数组的大小可以通过计算得到
//sz = sizeof(arr)/sizeof(arr[0]);


//二维数组的创建和初始化
/*
int main()
{
	//int arr[3][4] = {1,2,3,4};
	//int arr[3][4] = { 1,2,3,4,5};//可以把二维数组转换为一维数组
	int arr[3][4] = { {1,2,3},{4,5} };
	//char ch[5][6];
	int arr[][4] = { {1,2,3,4},{5,6,7,8} };//行可以省略
	int arr[2][] = { {1,2,3,4},{5,6,7,8} };//err;列不可以省略
	return 0;
}
*/

//二维数组的使用(二维数组也是通过下标来实现的)
//打印二维数组的每个元素

int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			//printf("%d", arr[i][j]); //第i行第j列的元素
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]); //打印数组元素的地址
		}
		printf("\n");
	}
	return 0;
}
//二维数组在内存中也是连续存储的
