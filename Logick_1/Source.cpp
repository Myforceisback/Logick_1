#include <iostream>
#include <string>
#include <Windows.h>
#include <locale.h>
#include <vector>

using namespace std;

/*void main() {
	int max, min, n;
	int mas[10];
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "������� 1" << endl;

	for (int i = 0; i < 10; i++) {
		cout << "������� �����  " << i + 1 << endl;
		cin >> n;
		mas[i] = n;
	}
	max = mas[0];
	min = mas[0];

	for (int i = 1; i < 10; i++) {
		if (max < mas[i])
			max = mas[i];
		if (min > mas[i])
			min = mas[i];
	}
	cout << "������� = " << max - min << endl;
	system("pause");
}*/

/*void main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "������� 2" << endl;
	
	int mas[10];
	srand(static_cast < unsigned int > (time(NULL)));

	for (int i = 0; i < 10; i++) {
		mas[i] = rand() % 100;
		cout << mas[i] << " \n";
	}

	system("pause");
}*/

/*void main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	cout << "������� 3" << endl;
	cout << "������� ������ ������� = " << " ";
	cin >> n;

	int* mas = new int[n];

	for (int i = 0; i < 10; i++) {

		mas[i] = rand() % 100;
		cout << mas[i] << " \n";
	}
	delete[] mas;
}*/
/*void main() {

	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "������� 4" << endl;

	int mas_matr[10][10];
	int n, m, score = 0;

	cout << "������� ���-�� �������� = " << " ";
	cin >> n;
	cout << endl;

	cout << "������� ���-�� ����� = " << " ";
	cin >> m;
	cout << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mas_matr[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mas_matr[i][j] << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		score = 0;
		for (int j = 0; j < m; j++) {
			score += mas_matr[i][j];
		}
		cout << "����� " << i + 1 << " ������ = " << score << endl;
	}
	system("pause");
}*/

