#include<iostream>
#include<cstdlib>
using namespace std;

int main()

{
	setlocale(LC_ALL, "Russian");

	int n = 1;
	int k = 4;
	int* arr = new int[n] {0};
	int cmd = 0;
	int x = 0;

	cout << "Выберите, что сделать:" << endl;
	cout << "0. Выход из программы" << endl;
	cout << "1. Вывод текущего состояния массива" << endl;
	cout << "2. Добавить элемент в конец массива" << endl;
	cout << "3. Добавить элемент в начало массива" << endl;
	cout << "4. Удалить элемент из конца массива" << endl;
	cout << "5. Удалить элемент из начала массива" << endl;
	cout << "6. Развернуть массив" << endl;

	cin >> cmd;

	while (cmd != 0)
	{
		switch (cmd)
		{
		case 1:
			cout << "Текущее состояние массива:" << endl;
			for (int i = 0; i < k; ++i)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
			break;
		case 2:
			cout << "Введите новый элемент:" << endl;
			if (k < n)
			{
				int* warr = new int[n];
				for (int i = 0; i < k; ++i)
				{
					warr[i] = arr[i];
				}
				delete[] arr;
				arr = new int[n * 2]{ 0 };
				for (int i = 0; i < k; ++i)
				{
					arr[i] = warr[i];
				}
				delete[] warr;
			}
			if (k >= n)
			{
				n = n * 2;
			}
			cin >> x;
			arr[k] = x;
			k += 1;
			break;
		case 3:
			cout << "Введите новый элемент:" << endl;
			if (k >= n)
			{
				int* warr = new int[n];
				for (int i = 0; i < k; ++i)
				{
					warr[i] = arr[i];
				}
				delete[] arr;
				arr = new int[n * 2]{ 0 };
				for (int i = 0; i < k; ++i)
				{
					arr[i + 1] = warr[i];
				}
				delete[] warr;
				n = n * 2;
			}
			cin >> x;
			arr[0] = x;
			k += 1;
			break;
		case 4:
			arr[k - 1] = 0;
			k -= 1;
			cout << "Последний элемент удален." << endl;
			break;
		case 5:
			for (int i = 0; i < k - 1; ++i)
			{
				arr[i] = arr[i + 1];
			}
			arr[k - 1] = 0;
			k -= 1;
			cout << "Первый элемент удален." << endl;
			break;
		case 6:
			int b = 0;
			for (int i = 0; i < k / 2; ++i)
			{
				b = arr[i];
				arr[i] = arr[k - i - 1];
				arr[k - i - 1] = b;
			}
			cout << "Массив развернут." << endl;
			break;
		}
        cout << "Выберите, что сделать:" << endl;
		cin >> cmd;
        if(cmd == 0)
        {
            break;
        }
	}
	delete[] arr;

	return EXIT_SUCCESS;
}