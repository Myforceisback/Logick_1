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

	cout << "Çàäàíèå 1" << endl;

	for (int i = 0; i < 10; i++) {
		cout << "Ââåäèòå ÷èñëî  " << i + 1 << endl;
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
	cout << "Ðàçíèöà = " << max - min << endl;
	system("pause");
}*/

/*void main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Çàäàíèå 2" << endl;
	
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
	cout << "Çàäàíèå 3" << endl;
	cout << "Ââåäèòå ðàçìåð ìàññèâà = " << " ";
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

	cout << "Çàäàíèå 4" << endl;

	int mas_matr[10][10];
	int n, m, score = 0;

	cout << "Ââåäèòå êîë-âî ñòîëáöîâ = " << " ";
	cin >> n;
	cout << endl;

	cout << "Ââåäèòå êîë-âî ñòðîê = " << " ";
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
		cout << "Ñóììà " << i + 1 << " ñòðîêè = " << score << endl;
	}
	system("pause");
}*/
/*
int const n = 5;
int main() {
	setlocale(LC_ALL, ".1251");
	setlocale(LC_ALL, "Russian");

	struct student {
		char fio[20];
		int number;
		float usp[n];
	};

	student N[n];
	int StudBestcount;

	for (int i = 0; i < n; ++i) {
		cout << "Введите фамилию и инициалы студента " << i << "-ого списка:" << endl;
		cin >> N[i].fio;
		cout << "Номер группы студента " << i << "-ого списка:" << endl;
		if (i == 0)cin >> N[i].number;
		else  cin >> N[i].number;
		cout << "Введите оценки студента " << i << "-ого списка:" << endl;
		if (i == 0) {
			for (int j = 0; j < n; ++j) {
				cout << "Subject[" << j << "]:"; cin >> N[i].usp[j];
				if (N[i].usp[j] > 0 && N[i].usp[j] <= 5)continue;
				else { --j; cout << "Пятибалльная система!" << endl; }
			}
		}
		else
			for (int j = 0; j < n; ++j) {
				cout << "Subject[" << j << "]:"; cin >> N[i].usp[j];
				if (N[i].usp[j] > 0 && N[i].usp[j] <= 5)continue;
				else { --j; cout << "Пятибалльная система!" << endl; }
			}
	}
	cout << "Сведения о студентах по возрастанию номера группы" << endl;
	for (int i = 0; i < n - 1; ++i) {
		int imin = i;
		for (int j = i + 1; j < n; ++j)
			if (N[j].number < N[imin].number) imin = j;
		float temp = N[i].number; N[i].number = N[imin].number; N[imin].number = temp;
	}
	for (int i = 0; i < n; ++i) {
		cout << "Фамилия и инициалы студента:" << N[i].fio << endl;
		cout << "Номер группы студента: " << N[i].number << endl;
		cout << "Оценки студента: " << N[i].fio << ":" << endl;
		for (int j = 0; j < n; ++j)
			cout << "Subject[" << j << "]:" << N[i].usp[j] << endl;
	}
	cout << "\nОтличники:\n" << endl;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j) {
			StudBestcount = 0;
			if (N[i].usp[j] >= 4.0) {
				cout << "Фамилия и инициалы студента-отличника:" << N[i].fio << endl;
				cout << "Номер группы студента-отличника:" << N[i].number << endl;
				j = (n - 1);
				++StudBestcount;
			}
		}
	if (StudBestcount == 0) cout << "Студентов-отличников нет!" << endl;
}
*/
