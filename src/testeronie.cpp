#include "testeronie.h"

int ping(const char *HashStr)
{

    std::string str = HashStr;
    const int leng = str.length();
    const int lengT = leng + 1;
    char *charArr = new char[lengT];

    std::vector<char> arrFirst;
    //arrFirst.resize(leng);
    std::copy(str.begin(), str.end(), std::back_inserter(arrFirst));
    arrFirst.shrink_to_fit();

    std::cout << "str: " << str << std::endl;
    std::cout << "leng: " << leng << std::endl;
    std::cout << "lengT: " << lengT << std::endl;

    std::cout << "arrFirst: " << arrFirst.size() << std::endl;
    postVec(arrFirst);
    /*for (auto i = arrFirst.begin(); i != arrFirst.end(); ++i)
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
    std::cout << "HashStr Byte Size: " << str.size() << std::endl;

    //delete[] charArr; // CLEANUP IS IMPORTANT

    return 100;
}

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