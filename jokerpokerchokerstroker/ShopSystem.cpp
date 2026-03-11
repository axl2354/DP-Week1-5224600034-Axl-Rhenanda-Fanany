#include <iostream>
#include "ShopSystem.h"
#include "ModifierFactory.h"
#include "InputGeneration.h"
using namespace std;

void ShopSystem::openShop(GameState &game)
{
    
    cout << "\n You get 5 Dooller And " << game.money/3 <<" Interest!\n";
    game.money = game.money+5+(game.money/3);
    
    int choice = 1;
    while (choice == 1)
    {
    cout << "\n=== SHOP ===\n";
    cout << "Dooller: $" << game.money << endl;

    cout << "1 - Buy Random Toker ($5)\n";
    cout << "2 - Leave Shop\n";

    choice = InputGeneration::askAction();

    
        if (game.money < 5&&choice == 1)
        {
            cout << "Not enough Dooller!\n";
        }

        game.money -= 5;

        IModifier* newToker = ModifierFactory::createRandom();
        if (choice==1){
        game.tokers.push_back(newToker);

        cout << "You bought a Toker!\n";
        }
    }
}