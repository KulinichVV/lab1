#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
int main()
	string a = "��� ����?";
	cout << "������, ���!" << endl;
	cout << a << endl;

	return 0;
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	system("color 0A");
}