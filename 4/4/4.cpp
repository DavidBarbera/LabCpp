#include <iostream>

using namespace std;

void allAscii()
{
	for (int i = 0; i < 256; ++i) {
		cout << i << " = " << (char)i << '\n';
	}
}

int binaryInt(char x)
{
	bool byte[8]{0,0,0,0,0,0,0,0};
	int num{ (int)x };
	for (int i = 0; i < 8; ++i) {
		byte[8 - (i + 1)] = (bool)(num % 2);
		num = num / 2;
	}
	num = 0;
	int base = 10000000;
	for (int i=0; i < 8; ++i) {
		num = byte[i] * base + num;
		base = base / 10;
			}
	return num;
}

int main()
{
	int num{ 7 };
	char x {4};
	char y { 5 };
	num = num / 2;
	cout << x << "\n" << (int)y <<'\n';
	cout << num;
	cout << '\n\n';
	cout << (int)x << '\n';
	cout << (int)~x <<'\n';

	cout << binaryInt(x)<<'\n';
	cout << binaryInt(~x) << '\n';

	//allAscii();

	getchar();
}


