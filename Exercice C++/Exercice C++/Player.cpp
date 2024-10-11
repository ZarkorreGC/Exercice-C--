#include "Player.h"

Player::Player() : _Dead(false)
{
}

Player::Player(float positionx, float positiony, float maxlife, float actuallife, Vector2 deplacer, float _strength) : _Dead(false), AMovable(0.f,0.f, 2.0f), strengt(2.f)
{

	IAttacker::IAttacker(2.f);
	Entity::Setposition(positionx, positiony);
	SetMaxlife(maxlife);
	Setlife(maxlife);
	player_position.Setxy(deplacer.Getx(), deplacer.Gety());
	std::cout << "Player just created at x = " + std::to_string(Getposition().Getx()) + " and y = " + std::to_string(Getposition().Gety()) + " with " + std::to_string(Get_max_life()) + " with direction x = " + std::to_string(player_position.Getx()) + " and y = " + std::to_string(player_position.Gety()) << std::endl;

}



void Player::Set_player_position(Vector2 playerposition)
{

	this->player_position = playerposition;

}

Vector2 Player::Getposition()
{
	return Entity::Getposition();
}

void Player::Set_dommage(float dommage)
{

	Alive::Set_dommage(dommage);
	if (Get_actual_life() <= 0)
	{
		std::cout << " Player Just Died " << std::endl;
		_Dead = true;
	}

}

void Player::deplacer()
{

	Vector2 player_deplacement = player_position - Getposition();
	Entity::Setposition(Getposition().Getx() + player_deplacement.Getx(), Getposition().Gety() + player_deplacement.Gety());
	std::cout << "Player move to x = " + std::to_string(Getposition().Getx()) + " and y = " + std::to_string(Getposition().Gety()) << std::endl;

}

void Player::Attaque(Alive* _Alive)
{
	_Alive->Set_dommage(10);
	if (Get_actual_life() <= 0)
	{
		std::cout << " Player Just Die " << std::endl;
		_Dead = true;
	}

}
