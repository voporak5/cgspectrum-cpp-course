// Week-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Character.h"
#include "Bomb.h"
#include "HealthPotion.h"
#include "Item.h"

int main()
{
    std::cout << "Hello World!\n";

    //Calls default constructor
    Character myCharacter;
    myCharacter.Print();

    Character otherCharacter("Larry", "Archer", 100, 20);
    otherCharacter.Print();

    
    otherCharacter.Give(new Bomb());
    otherCharacter.Give(new HealthPotion());
    otherCharacter.UseItems();
    otherCharacter.Print();

    Item* bomb2 = new Bomb();

    //Cast base class into inherited class
    Bomb* castBomb = dynamic_cast<Bomb*>(bomb2);

    if (castBomb)
    {
        castBomb->Use(&otherCharacter);
        otherCharacter.Print();
    }
    
    //Cast base class into inherited class
    //Can use if check to see if cast is successful to prevent
    //unintended behaviors
    HealthPotion* castHealth= dynamic_cast<HealthPotion*>(bomb2);
    if (castHealth)
    {
        castHealth->Use(&otherCharacter);
        otherCharacter.Print();
    }

    cout << otherCharacter << endl;
}