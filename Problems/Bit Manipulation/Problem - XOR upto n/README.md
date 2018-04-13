# Problem - XOR from 1 to n

```
XORupto(7) = 1 ^ 2 ^ 3 ^ 4 ^ 5 ^ 6  = 7
```

### Implementation

  - C++ - [xor_n.cpp](./xor_n.cpp)

#### Naive [Complexity O(n)]

  - XOR all numbers upto n i.e. ` 1 ^ 2 ^ 3 ^ 4 ^ 5 ... ^ n `

#### Fast [Complexity O(1)]

  - Calculate ` rem = n%4 `.
  - If ` rem = 0 `, then xor will be same as n.
  - If ` rem = 1 `, then xor will be 1.
  - If ` rem = 2 `, then xor will be n+1.
  - If ` rem = 3 ` ,then xor will be 0.
