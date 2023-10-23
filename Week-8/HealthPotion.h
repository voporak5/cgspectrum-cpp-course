#pragma once
#include "Item.h"

class HealthPotion : public Item
{
public:
	HealthPotion() 
		: Item()
	{

	}

	~HealthPotion() {}
	virtual void Use(Character* character) override;
};