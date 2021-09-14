#include "testeronie.h"
#include "vec.h"

int ping(const char *HashStr)
{

    const int shiftInt = 1;

    std::string str = HashStr;
    const int leng = str.length();
    const int lengT = leng + 1;
    char *charArr = new char[lengT];

    std::vector<char> vecArr;
    std::copy(str.begin(), str.end(), std::back_inserter(vecArr));
    vecArr.shrink_to_fit();

    /*std::cout << "str: " << str << std::endl;
    std::cout << "leng: " << leng << std::endl;
    std::cout << "lengT: " << lengT << std::endl;

    std::cout << "vecArr: " << vecArr.size() << std::endl;
    postVec(vecArr);
    postVecSHIFT(vecArr, shiftInt);

    // prints the original and the finished "Hash"
    std::cout << "\n"
              << HashStr << " : ";
    postVecSHIFTOnly(vecArr, shiftInt);
    std::cout << "\n";*/

    DBVecRotateL(vecArr, 2);

    std::cout << "Start: " << HashStr << " : ";
    postVecRotateL(vecArr, 2);
    std::cout << "\n";
    /*
    DBVecRotateR(vecArr, 2);
    std::cout << "Start: " << HashStr << " : ";
    postVecRotateR(vecArr, 2);
    std::cout << "\n";*/

    // Bit shifting rotator test.
    //int st = (int)0b01001101011100101000110100010111;
    int st = (int)0b01011001011001010110000101101000;
    int IntShift = 8;
    //int st = 255;
    //int IntShift = 6;

    std::bitset<32> SR(st);
    std::bitset<32> SL(st);
    std::bitset<32> TR(TestRight(st, IntShift));
    std::bitset<32> TL(TestLeft(st, IntShift));
    std::bitset<32> S_Int(st);
    //std::bitset<8> Ssa(TR);

    //int ia;

    /*
    // THIS IS ME TESTING A WAY TO CONVERT IT FROM BINARY TO A CHAR.
    std::string strBS = TL.to_string();

    std::bitset<8> sIa(strBS);

    unsigned long testLong = sIa.to_ulong();
    char testCh = (char)testLong;
    // END OF TEST */

    // TODO: Make a function to print out the variable, char and binary.

    /*
    std::cout << "Test int: " << st << " : " << S_Int;
    std::cout << "\nTestR func numb -> " << st << " rotateAmount -> " << IntShift << ":\t" << TestRight(st, IntShift) << std::endl;
    std::cout << "Start Bin: " << SR << " New Bin: " << TR << std::endl;
    std::cout << "\nTestL func numb -> " << st << " rotateAmount -> " << IntShift << ":\t" << TestLeft(st, IntShift) << std::endl;
    std::cout << "Start Bin: " << SL << " New Bin: " << TL << std::endl;

    std::cout << strBS << " strBS : " << sIa << " Char: " << testCh << " testLong " << testLong << std::endl;
    */

    BS32Char_ToConsole(0b01000110011010010110111001100100); // Writes Find in console.

    std::cout
        << "Original Hash: " << HashStr << std::endl;

    return 100;
}