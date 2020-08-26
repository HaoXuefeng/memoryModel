#include <iostream>
using namespace std;

//全局变量：不在函数内部被定义的就是全局变量
int g_a = 10;
int g_b = 10;

//const修饰的全局变量(全局常量)
const int c_g_a = 10;
const int c_g_b = 10;

int main1()
{
	//全局区：全局变量、静态变量、常量


	//创建一个普通的局部变量,函数体内部定义的变量都是局部变量
	int a = 10;
	int b = 10;
	cout << "局部变量 a 的地址是：\t" << (int)&a << endl;
	cout << "局部变量 b 的地址是：\t" << (int)&b << endl;

	cout << "全局变量 g_a 的地址是：\t" << (int)&g_a << endl;
	cout << "全局变量 g_b 的地址是：\t" << (int)&g_b << endl;


	//静态变量：	在普通变量前面加一个 static ，就是静态变量
	static int s_a = 10;
	static int s_b = 10;

	cout << "静态变量 s_a 的地址是：\t" << (int)&s_a << endl;
	cout << "静态变量 s_b 的地址是：\t" << (int)&s_b << endl;

	//常量：分为字符串常量 和 const 修饰的常量
	//字符串常量
	cout << "字符串常量的地址是：\t" << (int)&("Hello World") << endl;

	//const修饰的变量：分为const修饰的全局变量(全局常量)和const修饰的局部变量(局部常量)
	//const修饰的局部变量(局部常量)
	const int c_l_a = 10;
	const int c_l_b = 10;

	cout << "const修饰的局部常量c_l_a地址是：" << (int)&c_l_a << endl;
	cout << "const修饰的局部常量c_l_b地址是：" << (int)&c_l_b << endl;

	cout << "const修饰的全局常量c_g_a地址是：" << (int)&c_g_a << endl;
	cout << "const修饰的全局常量c_g_b地址是：" << (int)&c_g_b << endl;


	//	可以发现，全局变量、静态变量、字符串常量、const修饰的全局常量 在内存中是放在一个区段中的	（也就是全局区）
	//	局部变量 和 const修饰的局部常量 是放在另一个区段中的
	//	c - const	g - global	l - local	s - static

	system("pause");
	return 0;
}