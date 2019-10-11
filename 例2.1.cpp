#include <iostream>
#include<Windows.h>
#include<iomanip>       //进行格式控制需要包含此头文件
using namespace std;     
int digit(int n);      //返回整数n的位数
int n;
int main()
{
	char c;                                  		//定义变量c、a、f的值
	int a;
	float f;
	cin >> c >> a >> f;                           		//输入变量c、a、f的值
	a = a + c;
	f = f + 2 * a;
	cout.precision(digit((int)(f)) + 1);          //用iOS类中的成员函数cout.precision(n)
	cout << "c=" << c << "  a=" << a << "  f=" << f << endl;  	//输出变量c、a、f的值 f后小数点保留一位输出
	return 0;
}
int digit(int a)
{
	int d = 0;          //统计n的位数
	do
	{
		n = n / 10;
		d++;
	} while (n);
	system("pause");
	return d;
}