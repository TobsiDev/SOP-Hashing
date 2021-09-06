#include "testeronie.h"

int ping(const char *HashStr)
{

    const int shiftInt = 1;

    std::string str = HashStr;
    const int leng = str.length();
    const int lengT = leng + 1;
    char *charArr = new char[lengT];

    std::vector<char> vecArr;
    //vecArr.resize(leng);
    std::copy(str.begin(), str.end(), std::back_inserter(vecArr));
    vecArr.shrink_to_fit();

    std::cout << "str: " << str << std::endl;
    std::cout << "leng: " << leng << std::endl;
    std::cout << "lengT: " << lengT << std::endl;

    std::cout << "vecArr: " << vecArr.size() << std::endl;
    postVec(vecArr);
    postVecSHIFT(vecArr, shiftInt);

    // prints the original and the finished "Hash"
    std::cout << "\n"
              << HashStr << " : ";
    postVecSHIFTOnly(vecArr, shiftInt);
    std::cout << "\n";

    /*for (auto i = vecArr.begin(); i != vecArr.end(); ++i)
    {
        std::cout << *i << " ";
        std::bitset<8> forster(*i);
        std::cout << ": " << forster << std::endl;
    }
    std::cout << std::endl;

    //strcpy_s(charArr, lengT, str.c_str());

    //std::size_t bitsAmount = (str.size()) * 8;
    //std::bitset<8> forster(str, 8 * 1);
    //std::bitset<8> forster;*/

    std::cout << "Original Hash: " << HashStr << std::endl;
    //std::cout << "HashStr Byte Size: " << str.size() << std::endl;

    //delete[] charArr; // CLEANUP IS IMPORTANT

    return 100;
}

/// TODO:       Might have to set ALL the vector array functions to a separate file.

void postVec(std::vector<char> vecArr)
{
    for (auto i = vecArr.begin(); i != vecArr.end(); ++i)
    {
        std::cout << *i << " ";
        std::bitset<8> tBS(*i);
        std::cout << ": " << tBS << std::endl;
    }
    std::cout << std::endl;
}

void postVecSHIFT(std::vector<char> vecArr, int shiftAmount)
{
    for (auto i = vecArr.begin(); i != vecArr.end(); ++i)
    {
        int fa = (int)*i;
        //int shiftAmount = 1;
        //(fa >> 4);
        std::cout << fa << ": " << (fa >> shiftAmount) << " ";
        std::bitset<8> tBS((fa >> shiftAmount));
        std::cout << ": " << (tBS);
        //std::cout << ": " << (tBS) << std::endl;

        std::cout << "\t new char: ";

        char fat = (char)(fa >> shiftAmount);
        std::cout << fat;
        std::bitset<8> tfBS(fat);
        std::cout << ": " << tfBS << std::endl;
    }
    std::cout << std::endl;
}

void postVecSHIFTOnly(std::vector<char> vecArr, int shiftAmount)
{
    for (auto i = vecArr.begin(); i != vecArr.end(); ++i)
    {
        int fa = (int)*i;
        //int shiftAmount = 1;

        char fat = (char)(fa >> shiftAmount);
        std::cout << fat;
    }
    std::cout << std::endl;
}