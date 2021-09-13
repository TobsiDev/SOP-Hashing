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

    std::cout << "Original Hash: " << HashStr << std::endl;

    return 100;
}