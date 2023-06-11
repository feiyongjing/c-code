// https://cplusplus.com/reference/ c语言库函数查看
#include<stdio.h>  // 引入头文件stdio.h  printf函数必须引入该文件

int main() {



	char arr[20] = "abc";

	int length = sizeof(arr) / sizeof(int);
	for (int i = 0; i < length; i++) {
		printf("&arr[%d]的内存地址是：%p\n", i, &arr[i]);
	}

	// 1,2,3,4
	// 5,6,7,8
	// 9
	int arr2[3][4] = { 1,2,3,4,5,6,7,8,9 };

	// 1,2
	// 3,4
	// 5,6
	int arr3[3][4] = { {1,2},{3,4},{5,6} };

	int arr4[][4] = { {1,2},{3,4},{5,6} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("二维数组&arr4[%d][%d]的内存地址是：%p\n", i,j, &arr4[i][j]);
		}
		
	}


	int num1, num2;
	printf("请输入两个数字计算求和，输入使用空格隔开\n");
	scanf("%d %d", &num1, &num2);
	int sum = num1 + num2;
	printf("它们的和是%d\n", sum);

	fun();

#if 2>1
	printf("编译根据条件进行预处理，是否将这行代码编译");
#endif 

	return 0; // 标准返回0代表程序正常返回，其他返回表示程序异常

}


