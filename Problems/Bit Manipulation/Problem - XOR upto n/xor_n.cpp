#include <iostream>

using namespace std;

uint64_t XORupto(uint64_t n) {
	switch(n%4) {
		case 0: return n;
		case 1: return 1;
		case 2: return n+1;
		case 3: return 0;
	}
	return -1;
}

int main(int argc, char** argv) {
	uint64_t n;
	cin >> n;	
	cout << XORupto(n) << endl;
	return 0;
}
