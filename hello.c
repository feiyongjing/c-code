// https://cplusplus.com/reference/ c���Կ⺯���鿴
#include<stdio.h>  // ����ͷ�ļ�stdio.h  printf��������������ļ�

int main() {



	char arr[20] = "abc";

	int length = sizeof(arr) / sizeof(int);
	for (int i = 0; i < length; i++) {
		printf("&arr[%d]���ڴ��ַ�ǣ�%p\n", i, &arr[i]);
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
			printf("��ά����&arr4[%d][%d]���ڴ��ַ�ǣ�%p\n", i,j, &arr4[i][j]);
		}
		
	}


	int num1, num2;
	printf("�������������ּ�����ͣ�����ʹ�ÿո����\n");
	scanf("%d %d", &num1, &num2);
	int sum = num1 + num2;
	printf("���ǵĺ���%d\n", sum);

	fun();

#if 2>1
	printf("���������������Ԥ�����Ƿ����д������");
#endif 

	return 0; // ��׼����0��������������أ��������ر�ʾ�����쳣

}


