# define _CRT_SECURE_NO_WARNINGS
// 用于去除用户输入警告

// 引入头文件stdio.h  printf函数必须引入该文件
#include<stdio.h>
#include"tool.h"
// 使用尖括号与双引号引入头文件的区别：
// 尖括号引入是直接到系统头文件中找
// 双引号引入是先到自定义的头文件中查找，在自定义的头文件中找不到就再到系统头文件中找


// 宏定义 # define 宏名 常量 其实是进行替换
// 带参数的宏定义，函数名参数（参数没有类型限制）和函数体 不过不是执行完函数体后返回而是函数体代码替换
# define π 3.1415926;
# define A 3+4;    
# define FUN(a,b){printf("带参数的宏定义函数体打印：a是%d,b是%d\n",a,b);};  

# define F(a,b) a+b
# define AD(a,b) a*b

/*
		%a, %A            读入一个浮点值(仅C99有效)
		%c                读入一个字符
		%d                读入十进制整数
		%i                读入十进制，八进制，十六进制整数
		%o                读入八进制整数
		%x, %X            读入十六进制整数
		%s                读入一个字符串，遇空格、制表符或换行符结束。
		%f, %F, %e, %E, %g, %G 用来输入实数，可以用小数形式或指数形式输入。
		%p                读入一个指针
		%u                读入一个无符号十进制整数
		%n                至此已读入值的等价字符数
		%[]               扫描字符集合
		%%                读% 符号
	*/

int a = 100;

int main() {
	int a = 10;
	printf("当全局变量与局部变量的变量名称相同时优先使用局部变量，例如a的值是：%d\n",a);
	FUN(222, 333);
	printf("宏定义的本质是替换，而且是先替换再参与运算，所以结果是2+1*1+2=%d\n", AD(F(2, 1), F(1, 2)));

	const b = 888;                     //常量定义是必须被初始化并且不允许修改

	// 预处理符号
	printf("hello world!\n");          //  \n 是输出换行
	printf("当前文件的绝对路径是：%s\n", __FILE__);          // __FILE__ 表示当前文件的绝对路径
	printf("当前函数的名称是：%s\n", __FUNCTION__);          // __FUNCTION__ 表示当前函数的名称
	printf("当前日期是：%s\n", __DATE__);                    // __DATE__ 表示当前日期
	printf("当前时间是：%s\n", __TIME__);                    // __TIME__ 表示当前时间
	printf("当前代码的行号是：%d\n", __LINE__);              // __LINE__ 表示当前代码的行号

	printf("char类型字节大小是%zu\n", sizeof(char));           // char      'g'
	printf("short类型字节大小是%zu\n", sizeof(short));         // short     78
	printf("int类型字节大小是%zu\n", sizeof(int));             // int       77
	printf("long类型字节大小是%zu\n", sizeof(long));           // long      43
	printf("long long类型字节大小是%zu\n", sizeof(long long)); // long long 56   
	printf("float类型字节大小是%zu\n", sizeof(float));         // float     22.22f
	printf("double类型字节大小是%zu\n", sizeof(double));       // double    33.33d
	
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


