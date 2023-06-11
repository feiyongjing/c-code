#include<stdio.h>

// 结构体，其实就是对象
struct Student {
	int id;
	char name[10];
	int age;
	char sex[5];
	char tele[20];
	float score;
};


int main() {

	
	// 结构体赋值必须要使用struct声明，并且数据必须安装结构体申明的顺序赋值
	struct Student s = { 14382321,"张三",18,"男","15987654321",88.99f };
	// 获取结构体指针变量
	struct Student* ps = &s;

	printf("直接通过结构体对象获取内部属性：\n");
	printf("学生id：%d，姓名：%s,年龄：%d，性别：%s，电话：%s，成绩：%f\n", s.id, s.name, s.age, s.sex, s.tele, s.score);

	printf("通过结构体对象的指针变量解引用获取结构体内部属性：\n");
	printf("学生id：%d，姓名：%s,年龄：%d，性别：%s，电话：%s，成绩：%f\n", (*ps).id, (*ps).name, (*ps).age, (*ps).sex, (*ps).tele, (*ps).score);

	printf("通过结构体对象的指针变量使用结构成员运算符->获取结构体内部属性：\n");
	printf("学生id：%d，姓名：%s,年龄：%d，性别：%s，电话：%s，成绩：%f\n", ps->id, ps->name, ps->age, ps->sex, ps->tele, ps->score);


	return 0; // 标准返回0代表程序正常返回，其他返回表示程序异常
}
