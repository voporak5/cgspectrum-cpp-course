#pragma once
#include "Character.h"

class Item
{
public:
	Item() {};
	virtual ~Item();
	virtual void Use(Character* character) = 0;
};