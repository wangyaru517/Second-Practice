#include <iostream>
#include<Windows.h>
#include<iomanip>       //���и�ʽ������Ҫ������ͷ�ļ�
using namespace std;     
int digit(int n);      //��������n��λ��
int n;
int main()
{
	char c;                                  		//�������c��a��f��ֵ
	int a;
	float f;
	cin >> c >> a >> f;                           		//�������c��a��f��ֵ
	a = a + c;
	f = f + 2 * a;
	cout.precision(digit((int)(f)) + 1);          //��iOS���еĳ�Ա����cout.precision(n)
	cout << "c=" << c << "  a=" << a << "  f=" << f << endl;  	//�������c��a��f��ֵ f��С���㱣��һλ���
	return 0;
}
int digit(int a)
{
	int d = 0;          //ͳ��n��λ��
	do
	{
		n = n / 10;
		d++;
	} while (n);
	system("pause");
	return d;
}