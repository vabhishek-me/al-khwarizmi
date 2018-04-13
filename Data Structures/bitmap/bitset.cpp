#include <iostream>
#include <bitset>

using namespace std;

#define SIZE 10

int main() {
	bitset<SIZE> bmap;
	bitset<8> bmap8(5); // initialize 8 bits with bit value of 5 i.e., 00000101
	bitset<8> bmapS(string("1111")); // initialize 8 bits with value of string 00001111

	cout << bmap << endl;
	cout << bmap8 << endl;
	cout << bmapS << endl;
	cout << endl;

	/*
	 * Bits are set right to left i.e, 
	 * setting 0, 2 and 4 will result in 0 0 0 0 0 1 0 1 0 1
	 */
	// SET
	bmap[0] = 1;
	bmap[2] = 1;
	bmap[4] = 1;

	cout << bmap << endl;

	// .set() - sets all bits
	// .set(pos, value) - set the bit at pos to value(default value is 1)- right to left
	
	bmapS.set();
	bmap8.set(0, 0);
	bmap8.set(1);

	cout << bmapS << endl;
	cout << bmap8 << endl << endl;

	// .reset() - makes all bits 0
	// .reset(pos) - make bit at pos 0
	bmap8.reset(1);
	bmapS.reset();
	cout << bmapS << endl;
	cout << bmap8 << endl << endl;

	// .flip() - flip all bits
	// .flip(pos) - flip bit at pos
	bmap8.flip(1);
	bmapS.flip();
	cout << bmapS << endl;
	cout << bmap8 << endl << endl;


	// .size() - total number of bits
	cout << bmap.size() << endl;
	cout << endl;

	// .count() - returns number of set bits
	cout << bmap.count() << endl;
	cout << endl;

	// .test(index) - check value
	cout << bmap.test(0) << "\t" << bmap.test(1) << endl;
	cout << endl;

	// .any() - checks atleast if one bit is set
	// .none() - checks if none of the bit is set
	cout << bmap.any() << "\t" << bmap.none() << endl;
	cout << endl;

	// decimal to bitset
	int num = 77;
	bitset<8> bnum(num);
	cout << bnum << endl;
	return 0;
}
