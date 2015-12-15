#include <iostream>

using namespace std;

void printSizes()
{
	cout << "size of a char: " << sizeof(char) << " bytes"<<'\n';
	cout << "size of a bool: " << sizeof(bool) << " bytes" << '\n';
	cout << "size of a int: " << sizeof(int) << " bytes" << '\n';
	cout << "size of a float: " << sizeof(float) << " bytes" << '\n';
	cout << "size of a double: " << sizeof(double) << " bytes" << '\n';
}

int main()
{
	printSizes();
	getchar();
}