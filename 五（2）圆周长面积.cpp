#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	int r;
	cout << "请输入圆的半径：";
	cin >> r;
	cout << "圆的周长是" << 2*r*3.14 << endl;
	cout << "圆的面积是" << r*r*3.14 << endl;
	system("pause");
	return 0;
}