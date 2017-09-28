//Бондаренко Ярослав К-12
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
	cout << "\t  Керування теплицею в автоматичному режимi" << endl;
	GreenHouse *a;
	a = nullptr;
	try
	{
		a = choseTypeOfGreenHouse();
		if (!function2(a))
			cout << "\n\tОбраної вами теплицi не iснує!\n\n\tРоботу закiнчено!\n     Дякую за використання!\n" << endl;
	}
	catch (bad_alloc)
	{
		cout << "\n\tПомилка виділення пам'яті!\n\n\tРоботу закiнчено!\n     Дякую за використання!\n";
	}
	delete a;
	system("pause");
	return 0;
}