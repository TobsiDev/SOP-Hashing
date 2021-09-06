#pragma once

#include <bitset>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

int ping(const char *HashStr);

void postVec(std::vector<char> vecArr);

void postVecSHIFT(std::vector<char> vecArr, int shiftAmount);

void postVecSHIFTOnly(std::vector<char> vecArr, int shiftAmount);