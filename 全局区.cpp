#include <iostream>
using namespace std;

//ȫ�ֱ��������ں����ڲ�������ľ���ȫ�ֱ���
int g_a = 10;
int g_b = 10;

//const���ε�ȫ�ֱ���(ȫ�ֳ���)
const int c_g_a = 10;
const int c_g_b = 10;

int main1()
{
	//ȫ������ȫ�ֱ�������̬����������


	//����һ����ͨ�ľֲ�����,�������ڲ�����ı������Ǿֲ�����
	int a = 10;
	int b = 10;
	cout << "�ֲ����� a �ĵ�ַ�ǣ�\t" << (int)&a << endl;
	cout << "�ֲ����� b �ĵ�ַ�ǣ�\t" << (int)&b << endl;

	cout << "ȫ�ֱ��� g_a �ĵ�ַ�ǣ�\t" << (int)&g_a << endl;
	cout << "ȫ�ֱ��� g_b �ĵ�ַ�ǣ�\t" << (int)&g_b << endl;


	//��̬������	����ͨ����ǰ���һ�� static �����Ǿ�̬����
	static int s_a = 10;
	static int s_b = 10;

	cout << "��̬���� s_a �ĵ�ַ�ǣ�\t" << (int)&s_a << endl;
	cout << "��̬���� s_b �ĵ�ַ�ǣ�\t" << (int)&s_b << endl;

	//��������Ϊ�ַ������� �� const ���εĳ���
	//�ַ�������
	cout << "�ַ��������ĵ�ַ�ǣ�\t" << (int)&("Hello World") << endl;

	//const���εı�������Ϊconst���ε�ȫ�ֱ���(ȫ�ֳ���)��const���εľֲ�����(�ֲ�����)
	//const���εľֲ�����(�ֲ�����)
	const int c_l_a = 10;
	const int c_l_b = 10;

	cout << "const���εľֲ�����c_l_a��ַ�ǣ�" << (int)&c_l_a << endl;
	cout << "const���εľֲ�����c_l_b��ַ�ǣ�" << (int)&c_l_b << endl;

	cout << "const���ε�ȫ�ֳ���c_g_a��ַ�ǣ�" << (int)&c_g_a << endl;
	cout << "const���ε�ȫ�ֳ���c_g_b��ַ�ǣ�" << (int)&c_g_b << endl;


	//	���Է��֣�ȫ�ֱ�������̬�������ַ���������const���ε�ȫ�ֳ��� ���ڴ����Ƿ���һ�������е�	��Ҳ����ȫ������
	//	�ֲ����� �� const���εľֲ����� �Ƿ�����һ�������е�
	//	c - const	g - global	l - local	s - static

	system("pause");
	return 0;
}