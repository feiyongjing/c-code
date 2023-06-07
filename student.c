#include<stdio.h>

// 结构体，其实就是对象
struct Student{
	int id;
	char name[10];
	float score;
};


int main() {

	struct Student aa = { 1438,"张三",88.99f };

	printf("打印结构体");
	return 0; // 标准返回0代表程序正常返回，其他返回表示程序异常

}