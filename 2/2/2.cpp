#include <iostream>

using namespace std; //the purpose of this lab session, using namespace.

double square(double x)
{
	return x*x;
}

void print_square(double x) //void = no return, must write it
{
	cout << "the square of " << x << "is " << square(x) << "\n";
}

int main()
{
	print_square(1.234);
	getchar(); // just to wait user to press a key before program finishes execution
}