#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");
	string a = " :_(";
	int b;
	int c;
	cout << "Привет, мир!" << endl;
	cout << "Хотите сыграть в игру? \n";
	cout << "1 - Да		2 - Нет \n";
	cin >> c;
	if (c == 1) {
		cout << "Приступим. Нажмите пробел, чтобы продолжить \n";
	}
	else {
		cout << a << endl;
	}

	
	return 0;
}