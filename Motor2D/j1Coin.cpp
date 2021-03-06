#include "j1App.h"

#include "j1Map.h"

#include "SDL/include/SDL_rect.h"

#include "j1EntityMachine.h"

//Coin
Coin::Coin(float x, float y, EntityType Type) : Entity(x, y, Type)
{
	colliderRect = { (int)position.x, (int)position.y, 20, 20}; //Magic
	collider = App->collisions->AddCollider(colliderRect, ObjectType::COIN, App->entities, (Entity*)this);
	picked_up = false;
}

bool Coin::Save(pugi::xml_node & node) const {
	
	node.append_attribute("EntityType") = "COIN";

	return true;
};

bool Coin::Load(pugi::xml_node & node) {

	return true;
};

bool Coin::Awake(pugi::xml_node &)
{

	return true;
}

bool Coin::Start()
{

	return true;
}

bool Coin::Update(float dt)
{

	if (collider != nullptr)
	{
		collider->SetPos(position.x + 7, position.y + 7);
	}

	//Draw enemy
	App->map->DrawAnimation("spin", "Coin", position, &Ainfo, flip);

	return true;
}

