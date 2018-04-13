# BITMAP Data Structure

A BITMAP is a indexing technique using bits rather than bytes. It is also known as BIT ARRAY or BITMAP INDEX.

BITMAP saves memory because you need bits, not bytes or int datatypes i.e., 4 bytes.

# Implemenation

  - C [bitmap.c](./bitmap.c)

  - C++ - We can use ` bitset `. [bitset.cpp](./bitset.cpp)

```
  Bitset

  Header File - #include <bitset>

  NOTE : For bitset all bitwise operator are overloaded that is they can be applied to bitset directly without any casting or conversion, main overloaded operator are &, |, ==, != and shifting operator << and >> which makes operation on bitset easy.

  bset1 == bset2
  bset1 != bset2
  bset1 ^= bset2
  bset1 &= bset2
  bset1 |= bset2
  bset1 <<= 2
  bset1 >>= 2
  ~bset1
  bset1 & bset2
  bset1 | bset2
  bset1 ^ bset2

```
