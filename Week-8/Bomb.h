#pragma once
#include "Item.h"

class Bomb : public Item
{
public:
	Bomb()
		: Item()
	{
	
	}

	~Bomb() {}
	virtual void Use(Character* character) override;
};