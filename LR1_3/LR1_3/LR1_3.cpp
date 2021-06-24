//Расчет определителя матрицы, матрица размером 3 на 3. Ввод чисел построчно.Числа только целые.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	const int m = 3, n = 3;
	int d = 0;
	int a[m][n];
	for (int i = 0; i < m; i++)
	{
		cout << "Ввод строки" << i << endl;
		for (int j = 0; j < n; j++)		//построчное заполнение матрицы;
		{
			cout << "Ввод элемента" << j << " ";
			cin >> a[i][j];
		}
	}
	cout << "Исходная матрица:" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)		//вывод матрицы;
		{
			cout << setw(10) << setprecision(2) << a[i][j];
		}
	}
	cout << endl;
	d = a[0][0] * a[1][1] * a[2][2] + a[2][0] * a[0][1] * a[1][2] + a[1][0] * a[2][1] * a[0][2] - a[2][0] * a[1][1] * a[0][2] - a[0][0] * a[2][1] * a[1][2] - a[1][0] * a[0][1] * a[2][2]; //расчет определителя по формуле;
	cout << "Определитель матрицы=" << d;
	system("pause");
	return 0;
}

