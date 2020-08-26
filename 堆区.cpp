#include <iostream>
using namespace std;

//由程序员分配释放，若程序员不释放，程序结束后由操作系统回收
//在C++中主要利用 new 在堆区中开辟内存


int* func2() {
	//	指针 a 本身是局部变量，所以 a 是放在栈上的，但指针保存的数据是保存在堆区的（指针保存的地址是一个堆区的地址）
	int* a = new int(10);
	return a;
}

int main3()
{
	int* p = func2();		//p 接受了函数返回的地址，这个地址指向堆区

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
							//因为数据存放在堆区，除非程序员操作，否则整个程序运行完之前，这个内存地址的数据都不会被释放
							//所以 a 的值会一直都是 10


	system("pause");
	return 0;
}
