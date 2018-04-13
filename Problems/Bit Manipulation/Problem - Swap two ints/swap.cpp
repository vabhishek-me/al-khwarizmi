#include <iostream>

int main() {
	int a = 10,
	    b = 20;

	a ^= b;
	b ^= a; 
	a ^= b;

	cout << a << endl << b << endl;

	return 0;
}
