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
/*#include <iostream>
#include <string>
using namespace std;

struct STUDENT // структура STUDENT
{
	string name;
	int group;
	float ses[5];
};

int main()
{
	setlocale(LC_ALL, "Russian");
	const int size = 10; // количество студентов
	STUDENT stud1[size]; // массив 
	int i, j, n;
	int count = 0; // счётчик студентов с плохими отметками 
	// eсли он равен количеству студентов значит 
	// хорошистов нет

	for (n = 0; n < size; n++) // ввод информации
	{
		cout << "Введите фамилию студента " << endl;
		cin >> stud1[n].name;
		cout << "Введите номер группы " << endl;
		cin >> stud1[n].group;
		cout << "Введите 5 оценок " << endl;
		for (int i = 0; i < 5; i++)
			cin >> stud1[n].ses[i];
	}

	STUDENT stud2[size]; // массив для упорядоченных элементов
	i = 0, j = 0;
	int min, imin;
	min = 1023;

	while (stud2[size - 1].group < 0) {    //заполнение массива упорядоченно
		for (i = 0; i < size; i++) { //вычисление минимального элемента
			if (stud1[i].group < min) {
				min = stud1[i].group;
				imin = i;
			}
		}
		stud2[j] = stud1[imin]; //перенос элементов
		stud1[imin].group = 1023;
		min = 1023;
		j++;
	}
	float sum = 0; // счётчик суммы оценок
	cout << "Фамилии и номера групп студентов со средней оценкой выше 4.0" << endl;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 5; j++)
			sum += stud2[i].ses[j];

		if (sum / 5 > 4.0) // условие хорошиста
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
*/
