#include <iostream>
#include "InputGeneration.h"
#include "RandomInputGenerator.h"

using namespace std;

int InputGeneration::askCardAmount(int max)
{
    int amount = RandomInputGenerator::getCardAmount(max);
    cout << "How many cards to play? " << amount << endl;
    return amount;
}

int InputGeneration::askDiscardAmount(int max)
{
    int amount = RandomInputGenerator::getCardAmount(max);
    cout << "How many cards to discard? " << amount << endl;
    return amount;
}

vector<int> InputGeneration::askIndexes(int amount, int max)
{
    vector<int> indexes = RandomInputGenerator::getIndexes(amount, max);

    cout << "Indexes: ";
    for (int i : indexes)
        cout << i << " ";
    cout << endl;

    return indexes;
}

int InputGeneration::askAction()
{
    int choice = RandomInputGenerator::getAction();

    cout << "Action chosen: " << choice << endl;

    return choice;
}