<h2 align="center">
📝🖥⛓🔗 Hashing algorithms research 🔗⛓🖥📝
</h2>

Init :D


### Devlog: 02-SEP-2021

Made a way to print out the array as binary. This is done before i'm doing any bitwise operations because i can see whats happening to the input text.

EXAMPLE:

```bash
arrFirst: 23
H : 01001000
e : 01100101
l : 01101100
l : 01101100
o : 01101111
  : 00100000
f : 01100110
r : 01110010
o : 01101111
m : 01101101
  : 00100000
t : 01110100
h : 01101000
e : 01100101
  : 00100000
T : 01010100
e : 01100101
r : 01110010
m : 01101101
i : 01101001
n : 01101110
a : 01100001
l : 01101100

Original Hash: Hello from the Terminal
```


### [Prime numbers from 1 - 80](https://en.wikipedia.org/wiki/List_of_prime_numbers)

|       | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   | 10  | 11  | 12  | 13  | 14  | 15  | 16  | 17  | 18  | 19  | 20  |
| ----- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 1–20  | 2   | 3   | 5   | 7   | 11  | 13  | 17  | 19  | 23  | 29  | 31  | 37  | 41  | 43  | 47  | 53  | 59  | 61  | 67  | 71  |
| 21–40 | 73  | 79  | 83  | 89  | 97  | 101 | 103 | 107 | 109 | 113 | 127 | 131 | 137 | 139 | 149 | 151 | 157 | 163 | 167 | 173 |
| 41–60 | 179 | 181 | 191 | 193 | 197 | 199 | 211 | 223 | 227 | 229 | 233 | 239 | 241 | 251 | 257 | 263 | 269 | 271 | 277 | 281 |
| 61–80 | 283 | 293 | 307 | 311 | 313 | 317 | 331 | 337 | 347 | 349 | 353 | 359 | 367 | 373 | 379 | 383 | 389 | 397 | 401 | 409 |


### TESTING BITSHIFTING

```bash
T : 01010100
e : 01100101
r : 01110010
m : 01101101
i : 01101001
n : 01101110
a : 01100001
l : 01101100
e : 01100101
n : 01101110
  : 00100000
e : 01100101
r : 01110010
  : 00100000
G : 01000111
U : 01010101
D : 01000100

84: 42 : 00101010        new char: *: 00101010
101: 50 : 00110010       new char: 2: 00110010
114: 57 : 00111001       new char: 9: 00111001
109: 54 : 00110110       new char: 6: 00110110
105: 52 : 00110100       new char: 4: 00110100
110: 55 : 00110111       new char: 7: 00110111
97: 48 : 00110000        new char: 0: 00110000
108: 54 : 00110110       new char: 6: 00110110
101: 50 : 00110010       new char: 2: 00110010
110: 55 : 00110111       new char: 7: 00110111
32: 16 : 00010000        new char: : 00010000
101: 50 : 00110010       new char: 2: 00110010
114: 57 : 00111001       new char: 9: 00111001
32: 16 : 00010000        new char: : 00010000
71: 35 : 00100011        new char: #: 00100011
85: 42 : 00101010        new char: *: 00101010
68: 34 : 00100010        new char: ": 00100010


Terminalen er GUD : *29647062729#*"

Original Hash: Terminalen er GUD
``` 

### Devlog 13-SEP-2021

#### I made something that tests my Bit Shifting Rotation function.
I tested this a few times and it seems to work (If you don't go over the integers numerical limit 2147483647). I've tested with the binarys 01001101011100101000110100010111 which is 1299352855, 00000000000000000000000110011101 which is 413 and 00000000000000000000000110011101 which is 255. You can see how i tested it below.

```
Test int: 1299352855 : 01001101011100101000110100010111
TestR func numb -> 1299352855 rotateAmount -> 6:        1563806260
Start Bin: 01001101011100101000110100010111 New Bin: 01011101001101011100101000110100

TestL func numb -> 1299352855 rotateAmount -> 6:        1554204115
Start Bin: 01001101011100101000110100010111 New Bin: 01011100101000110100010111010011



Test int: 413 : 00000000000000000000000110011101
TestR func numb -> 413 rotateAmount -> 6:       1946157062
Start Bin: 00000000000000000000000110011101 New Bin: 01110100000000000000000000000110

TestL func numb -> 413 rotateAmount -> 6:       26432
Start Bin: 00000000000000000000000110011101 New Bin: 00000000000000000110011101000000



Test int: 255 : 00000000000000000000000011111111
TestR func numb -> 255 rotateAmount -> 6:       -67108861
Start Bin: 00000000000000000000000011111111 New Bin: 11111100000000000000000000000011

TestL func numb -> 255 rotateAmount -> 6:       16320
Start Bin: 00000000000000000000000011111111 New Bin: 00000000000000000011111111000000
```

#### The code to make the Bit Shifting Rotation:
```cpp
//////////////////////////////////////////////////////////
//              TESTING BITSHIFT ROTATION               //
//////////////////////////////////////////////////////////

int TestRight(int numb, int rotateAmount)
{
    // I use 32 because an int is 4 bytes which is 32 bits
    return ((numb >> rotateAmount) | (numb << (32 - rotateAmount)));
}

int TestLeft(int numb, int rotateAmount)
{
    // I use 32 because an int is 4 bytes which is 32 bits
    return ((numb << rotateAmount) | (numb >> (32 - rotateAmount)));
}
```



## TODO:
  - [x] Get something to work.
  - [X] Get Bit shifting to work.
  - [X] Get Bit shifting rotations to work.
  - [ ] Fixup the 'final' prototype functions.
  - [ ] Start researching a bit more on SHA Hashing functions.
  - [ ] ...
  - [ ] ...
  - [ ] ...
  - [ ] I Hash function that actually works.
<!--  - [ ] a. -->