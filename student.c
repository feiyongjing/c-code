#include<stdio.h>

// �ṹ�壬��ʵ���Ƕ���
struct Student {
	int id;
	char name[10];
	int age;
	char sex[5];
	char tele[20];
	float score;
};


int main() {

	
	// �ṹ�帳ֵ����Ҫʹ��struct�������������ݱ��밲װ�ṹ��������˳��ֵ
	struct Student s = { 14382321,"����",18,"��","15987654321",88.99f };
	// ��ȡ�ṹ��ָ�����
	struct Student* ps = &s;

	printf("ֱ��ͨ���ṹ������ȡ�ڲ����ԣ�\n");
	printf("ѧ��id��%d��������%s,���䣺%d���Ա�%s���绰��%s���ɼ���%f\n", s.id, s.name, s.age, s.sex, s.tele, s.score);

	printf("ͨ���ṹ������ָ����������û�ȡ�ṹ���ڲ����ԣ�\n");
	printf("ѧ��id��%d��������%s,���䣺%d���Ա�%s���绰��%s���ɼ���%f\n", (*ps).id, (*ps).name, (*ps).age, (*ps).sex, (*ps).tele, (*ps).score);

	printf("ͨ���ṹ������ָ�����ʹ�ýṹ��Ա�����->��ȡ�ṹ���ڲ����ԣ�\n");
	printf("ѧ��id��%d��������%s,���䣺%d���Ա�%s���绰��%s���ɼ���%f\n", ps->id, ps->name, ps->age, ps->sex, ps->tele, ps->score);


	return 0; // ��׼����0��������������أ��������ر�ʾ�����쳣
}
