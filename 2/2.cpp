//���������� ������� �-12
#include <iostream>
#include <string>
#include "GreenHouse.h"
#include "copyright.h"
#include "function.h"
using namespace std;

int main()
{
	int typeOfGreenHouse;
	setlocale(LC_CTYPE, "ukr");
	copyright();
	cout << "\t  ��������� �������� � ������������� �����i" << endl;
	GreenHouse *a;
	a = nullptr;
	try
	{
		a = choseTypeOfGreenHouse();
		if (!function2(a))
			cout << "\n\t������ ���� ������i �� i���!\n\n\t������ ���i�����!\n     ����� �� ������������!\n" << endl;
	}
	catch (bad_alloc)
	{
		cout << "\n\t������� �������� ���'��!\n\n\t������ ���i�����!\n     ����� �� ������������!\n";
	}
	delete a;
	system("pause");
	return 0;
}