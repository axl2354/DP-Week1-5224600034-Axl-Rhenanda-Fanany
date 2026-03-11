#include "RandomInputGenerator.h"
#include <cstdlib>
#include <ctime>
#include <vector>

int RandomInputGenerator::getAction()
{
    return rand() % 2 + 1; // 1 or 2
}

int RandomInputGenerator::getCardAmount(int max)
{
    return rand() % max + 1;
}

std::vector<int> RandomInputGenerator::getIndexes(int amount, int max)
{
    std::vector<int> indexes;

    while (indexes.size() < amount)
    {
        int index = rand() % max;

        bool exists = false;

        for (int i : indexes)
        {
            if (i == index)
            {
                exists = true;
                break;
            }
        }

        if (!exists)
            indexes.push_back(index);
    }

    return indexes;
}