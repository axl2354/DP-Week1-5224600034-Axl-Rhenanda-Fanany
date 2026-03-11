#pragma once
#include <vector>

class InputGeneration
{
public:
    static int askCardAmount(int max);
    static int askDiscardAmount(int max);
    static std::vector<int> askIndexes(int amount,int max);
    static int askAction();
};