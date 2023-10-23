#include "HealthPotion.h"
#include "Character.h"

void HealthPotion::Use(Character* character)
{
	character->Heal();
}
