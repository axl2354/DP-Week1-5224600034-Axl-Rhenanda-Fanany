#pragma once
#include <vector>

class RandomInputGenerator
{
public:
    static int getAction();
    static int getCardAmount(int max);
    static std::vector<int> getIndexes(int amount, int max);
};