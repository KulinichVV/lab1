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
	cout << "������, ���!" << endl;
	cout << "������ ������� � ����? \n";
	cout << "1 - ��		2 - ��� \n";
	cin >> c;
	if (c == 1) {
		cout << "���������. ������� ������, ����� ���������� \n";
	}
	else {
		cout << a << endl;
	}

	
	return 0;
}