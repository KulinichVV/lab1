#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
int main()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	string a = "Как дела?";
	cout << "Привет, мир!" << endl;
	cout << a << endl;

	return 0;
}