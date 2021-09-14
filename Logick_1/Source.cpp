#include "stdafx.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <locale.h>
#include <time.h>

using namespace std;


void zadanie1() {
	int max, min, n;
	int mas[10];
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Zadanie 1" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "Vvedite " << i + 1 << " element = " << " ";
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
	cout << "Raznica = " << max - min << endl;
	system("pause");
}

void zadanie2() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Zadanie 2" << endl;
	
	int mas[10];
	srand(static_cast < unsigned int > (time(NULL)));
	for (int i = 0; i < 10; i++) {
		mas[i] = rand() % 100;
		cout << mas[i] << " \n";
	}
	system("pause");
}

void zadanie3() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	cout << "Zadanie 3" << endl;
	cout << "Vvedite dlinnu massiva = " << " ";
	cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++) {
		mas[i] = 10000 + rand() % (100000-10000);
		cout << mas[i] << " \n";
	}
	delete[] mas;
	system("pause");
}
void zadanie4() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Zadanie 4" << endl;
	int mas_matr[10][10];
	int n, m, score = 0;
	cout << "Vvedite kol-vo stolbcov = " << " ";
	cin >> n;
	cout << endl;
	cout << "Vvedite kol-vo strok = " << " ";
	cin >> m;
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas_matr[i][j] = rand() % 1000;
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
		cout << "Summa " << i + 1 << " stroki = " << score << endl;
	}
	system("pause");
}

void zadanie5() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int const nn = 5;
	cout << "Zadanie 5" << endl;
	
	struct student {
		char fio[20];
		int number;
		float usp[nn];
	};
	student N[nn];
	int StudBestcount;
	for (int i = 0; i < nn; ++i) {
		cout << "Введите фамилию и инициалы студента " << i << "-ого списка:" << endl;
		cin >> N[i].fio;
		cout << "Номер группы студента " << i << "-ого списка:" << endl;
		if (i == 0)cin >> N[i].number;
		else  cin >> N[i].number;
		cout << "Введите оценки студента " << i << "-ого списка:" << endl;
		if (i == 0) {
			for (int j = 0; j < nn; ++j) {
				cout << "Subject[" << j << "]:"; cin >> N[i].usp[j];
				if (N[i].usp[j] > 0 && N[i].usp[j] <= 5)continue;
				else { --j; cout << "Пятибалльная система!" << endl; }
			}
		}
		else
			for (int j = 0; j < nn; ++j) {
				cout << "Subject[" << j << "]:"; cin >> N[i].usp[j];
				if (N[i].usp[j] > 0 && N[i].usp[j] <= 5)continue;
				else { --j; cout << "Пятибалльная система!" << endl; }
			}
	}
	cout << "Сведения о студентах по возрастанию номера группы" << endl;
	for (int i = 0; i < nn - 1; ++i) {
		int imin = i;
		for (int j = i + 1; j < nn; ++j)
			if (N[j].number < N[imin].number) imin = j;
		float temp = N[i].number; N[i].number = N[imin].number; N[imin].number = temp;
	}
	for (int i = 0; i < nn; ++i) {
		cout << "Фамилия и инициалы студента:" << N[i].fio << endl;
		cout << "Номер группы студента: " << N[i].number << endl;
		cout << "Оценки студента: " << N[i].fio << ":" << endl;
		for (int j = 0; j < nn; ++j)
			cout << "Subject[" << j << "]:" << N[i].usp[j] << endl;
	}
	cout << "\nОтличники:\n" << endl;
	for (int i = 0; i < nn; ++i)
		for (int j = 0; j < nn; ++j) {
			StudBestcount = 0;
			if (N[i].usp[j] >= 4.0) {
				cout << "Фамилия и инициалы студента-отличника:" << N[i].fio << endl;
				cout << "Номер группы студента-отличника:" << N[i].number << endl;
				j = (nn - 1);
				++StudBestcount;
			}
		}
	if (StudBestcount == 0) cout << "Студентов-отличников нет!" << endl;
	system("pause");
}

void main(){
	zadanie1();
	zadanie2();
	zadanie3();
	zadanie4();
	zadanie5();
	system("pause");
}
