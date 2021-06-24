//Написать программу, которая заменяет все четные числа в целочисленном статическом массиве на 0. (массив из 10 элементов)
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    const int M = 10;
    int A[M];
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < M; i++)
    {
        cin >> A[i];                                //заполнение массива;
    }
    for (int i = 0; i < M; i++)
    {
        if (A[i] % 2 == 0)  //проверка условия на четность элемента и замена на 0;
            A[i] = 0;
    }
    cout << "Полученный массив:" << endl;
    for (int i = 0; i < M; i++)
        cout << setw(2) << A[i] << " ";                       // вывод массива;
    system("pause");
    return 0;
}

