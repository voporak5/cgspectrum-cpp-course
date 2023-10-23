#include "Bomb.h"
#include "Character.h"

void Bomb::Use(Character* character)
{
	character->Damage();
}
