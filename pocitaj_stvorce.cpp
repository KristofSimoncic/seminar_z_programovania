#include <iostream>
using namespace std;

unsigned int pocitaj_stvorce(unsigned long a, unsigned long b) {
	return abs(int(sqrt(b)) - int(sqrt(a)));
}

int main()
{
	cout << pocitaj_stvorce(20, 2);
}

