#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int a = 0, b = 0;
	int *t;
	t = new int[20];
	int i = 0;
	for (i = 0;i < 20;i++)
	{
		cin >> t[i];
		if (t[i] > 0)
			a++;
		if (t[i] < 0)
			b++;
	}
	cout << "��������������" << a << "��" << endl;
	cout << "�������и�����" << b << "��" << endl;
	system("pause");
}

