#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	setlocale(0, "Russian");

	int chek = 1;

	while (chek == 1)
	{
		cout << "Введите 1 для рассчета, 0 для завершения программы >";
		cin >> chek;
		switch (chek)
		{
		case(0):
		{
			cout << "Программа завершена";
			break;
		}
		case(1):
		{
			float n;
			long double itg = 0;

			cout << "((-2)/1)+(3/2!)-(4/3!)+...+(((-1)^n(n+1))/n!)" << endl;
			cout << "Введите n" << endl << "В случае ввода рационального числа, дробная часть будет отброшена" << endl;
			cout << '>';
			cin >> n;
			cout << "" << endl;
			if (n <= 0)
			{
				cout << "n не натуральное" << endl;
				continue;
			}

			n = floor(n);
			double fact = 1;

			for (int i = 1; i <= n; i++)
			{
				fact /= fact * i;
				itg = itg + ((pow(-1, i) * (i + 1)) * fact);
			}
			cout << "Итог >" << itg << endl;
			continue;
		}
		default:
		{
			cout << "Неизвестная ошибка" << endl;
			chek = 1;
			continue;
		}
		}
	}
}