#include <iostream>
using namespace std;

//C++ �У��� new ���������ڶ�����������
//�������ٵ����ݣ��ɳ���Ա�ֶ����٣��ֶ��ͷţ������ֶ��ͷţ��ڳ��������������Զ��ͷţ�

//�ͷ�ʹ�ò����� delete
//�﷨��new ��������(����ֵ)
//���� new ���������ݣ��᷵�ظ����ݶ�Ӧ���͵�ָ�룬����Ҫ��ָ������ȥ���գ�int* p = new int(10);

int* func() {					//����ֵ��ָ������
	int* a = new int(10);
	return a;
}

void test01() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//���Ҫ�ͷŶ������ڴ棬ʹ�ùؼ���delete
	delete p;
	//cout << *p << endl;
	//delete֮���ٴ���ͼ���ʸÿ��ڴ�ᱨ����ȡ����Ȩ�޳�ͻ
}

//�ڶ������� new ����һ������
void test02() {
	//�ڶ�����������10������Ԫ�ص�����
	int* array = new int[10];//
	for (int i = 0; i < 10; i++) {
		array[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << array[i] << endl;
		//cout << *(array + i) << endl;		//����дҲ�ܴﵽ��ͬ��Ч������Ϊ�����������׵�ַ
	}
	//�ͷŶ���������: �� delete �������һ�� [] 
	delete[] array;
}

int main()
{
	//test01();
	test02();


	system("pause");
	return 0;
}