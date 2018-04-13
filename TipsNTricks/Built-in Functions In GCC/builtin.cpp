#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

    	cout << "Number of 1s = " <<  __builtin_popcount(n) << endl;
	cout << "Leading 0s   = " << __builtin_clz(n) << endl;
	cout << "Trailing 0s  = " << __builtin_ctz(n) << endl;

	return 1;
}
