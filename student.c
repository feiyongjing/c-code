#include<stdio.h>

// �ṹ�壬��ʵ���Ƕ���
struct Student{
	int id;
	char name[10];
	float score;
};


int main() {

	struct Student aa = { 1438,"����",88.99f };

	printf("��ӡ�ṹ��");
	return 0; // ��׼����0��������������أ��������ر�ʾ�����쳣

}