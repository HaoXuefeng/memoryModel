#include <iostream>
using namespace std;

//C++ 中，用 new 操作符来在堆区开辟数据
//堆区开辟的数据，由程序员手动开辟，手动释放（若不手动释放，在程序结束后编译器自动释放）

//释放使用操作符 delete
//语法：new 数据类型(数据值)
//利用 new 创建的数据，会返回该数据对应类型的指针，所以要用指针类型去接收：int* p = new int(10);

int* func() {					//返回值是指针类型
	int* a = new int(10);
	return a;
}

void test01() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//如果要释放堆区的内存，使用关键字delete
	delete p;
	//cout << *p << endl;
	//delete之后，再次试图访问该块内存会报错，读取访问权限冲突
}

//在堆区利用 new 开辟一个数组
void test02() {
	//在堆区，创建有10个整形元素的数组
	int* array = new int[10];//
	for (int i = 0; i < 10; i++) {
		array[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << array[i] << endl;
		//cout << *(array + i) << endl;		//这样写也能达到相同的效果，因为数组名就是首地址
	}
	//释放堆区的数组: 在 delete 后面加上一个 [] 
	delete[] array;
}

int main()
{
	//test01();
	test02();


	system("pause");
	return 0;
}