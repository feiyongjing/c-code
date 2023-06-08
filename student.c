#include<stdio.h>

// 结构体，其实就是对象
struct Student{
	int id;
	char name[10];
	float score;
};

// 枚举类型
enum Color {
	RED,
	GREEN,
	BLUN
};


int main() {

	// 字符数组赋值字符串常量时可以省略数组长度，会根据字符串长度自动分配数组长度
	// 注意所有字符串的末尾都有 '\0' 这个字符，'\0'是字符串的结束标志默认是被隐藏的，即字符串的长度和字符数组长度是默认加1
	char arr1[] = "abc";
	// 注意如果没有指定数组长度并且直接使用常量字符数组需要手动在最后添加 '\0' 表示结束字符，
	// 如果没有则在打印字符串时会打印该字符数组和内存中该字符串之后的数据直到出现'\0'
	char arr2[] = {'a','b','c'};
	printf("'abc'字符串默认在末尾都有 \\0 这个字符，但是字符串的长度不包含结尾字符：%d\n", strlen(arr1));
	printf("如果没有则在打印字符串时会打印该字符数组和内存中该字符串之后的数据直到出现 \\0，所以字符串的长度获取是随机值：%d\n", strlen(arr2));
	printf("abc\0de");

	// 结构体赋值必须要使用struct声明，并且数据必须安装结构体申明的顺序赋值
	struct Student a = { 1438,"张三",88.99f };

	// 枚举直接赋值枚举常量使用
	enum Color red = RED;
	
	return 0; // 标准返回0代表程序正常返回，其他返回表示程序异常

}