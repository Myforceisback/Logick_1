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
        setlocale(LC_ALL, "Russian");
	const int size = 10;
	STUDENT stud1[size]; 
	int i, j, n;
	int count = 0;
	cout << "Zadanie 5" << endl;
	
	struct STUDENT
{
	string name;
	int group;
	float ses[5];
};

	for (n = 0; n < size; n++)
	{
		cout << "Введите фамилию студента " << endl;
		cin >> stud1[n].name;
		cout << "Введите номер группы " << endl;
		cin >> stud1[n].group;
		cout << "Введите 5 оценок " << endl;
		for (int i = 0; i < 5; i++)
			cin >> stud1[n].ses[i];
	}

	STUDENT stud2[size];
	i = 0, j = 0;
	int min, imin;
	min = 1023;

	while (stud2[size - 1].group < 0) {    
		for (i = 0; i < size; i++) { 
			if (stud1[i].group < min) {
				min = stud1[i].group;
				imin = i;
			}
		}
		stud2[j] = stud1[imin]; 
		stud1[imin].group = 1023;
		min = 1023;
		j++;
	}
	float sum = 0; 
	cout << "Фамилии и номера групп студентов со средней оценкой выше 4.0" << endl;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 5; j++)
			sum += stud2[i].ses[j];

		if (sum / 5 > 4.0) 
		{
			cout << "Фамилия: " << stud2[i].name << endl;
			cout << "Номер группы: " << stud2[i].group << endl;
		}
		else
			count++;

		sum = 0;
	}
	if (count == size)
		cout << "Такие студенты отсутствуют " << endl;

	system("Pause");

	return 0;
}

void main(){
	zadanie1();
	zadanie2();
	zadanie3();
	zadanie4();
	zadanie5();
	system("pause");
}
