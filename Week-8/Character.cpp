//User defined classes gets double quotes instead of < >
#include "Character.h"
#include <iostream>
#include "Item.h"

using namespace std;

Character::Character()
	// This way of initialization sets values as object is being initialized
	: m_name("CPU")
	, m_characterClass("Warrior")
	, m_health(100)
	, m_mana(20)
{	
	//This code is hit after object is already initialized
	//so it is essentially setting values a second time
	/*m_name = "CPU";
	m_characterClass = "Warrior";
	m_health = 100;
	m_mana = 20;*/
}

Character::Character(string name, string characterClass, int health, int mana)
	: m_name(name)
	, m_characterClass(characterClass)
	, m_health(health)
	, m_mana(mana)
{	
	/*m_name = name;
	m_characterClass = characterClass;
	m_health = health;
	m_mana = mana;*/
}

// Destructor
Character::~Character()
{
	while (!m_inventory.empty())
	{
		delete m_inventory.back();
		m_inventory.pop_back();
	}
}

// Member functions
void Character::Print()
{
	cout << "Name: " << m_name << endl;
	cout << "Class: " << m_characterClass << endl;
	cout << "Health: " << m_health << endl;
	cout << "Mana: " << m_mana << endl;
}

void Character::Heal()
{
	m_health = 100;
}

void Character::Damage()
{
	m_health -= 10;
}

void Character::Give(Item* item)
{
	m_inventory.push_back(item);
}

void Character::UseItems()
{
	for (auto item = m_inventory.begin(); item != m_inventory.end(); ++item)
	{
		(*item)->Use(this);
		delete *item;
	}

	m_inventory.clear();
}

ostream& operator<<(ostream& left, const Character& right)
{
	// TODO: insert return statement here
	left << "Name: " << right.m_name << "\nClass: " << right.m_characterClass << "\nHealth: " << right.m_health << "\nMana: " << right.m_mana;
	return left;
}