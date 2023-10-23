#pragma once
#include <string>
#include <vector>

using namespace std;

class Item;

class Character
{
	// Member variables
	string m_name;
	string m_characterClass;
	int m_health;
	int m_mana;
	vector<Item*> m_inventory;

public:
	// Constructors
	Character();
	Character(string name, string characterClass, int health, int mana);

	// Destructor
	~Character();

	// Member functions
	void Print();
	void Heal();
	void Damage();
	void Give(Item* item);
	void UseItems();	

	friend ostream& operator<<(ostream& left, const Character& right);
};