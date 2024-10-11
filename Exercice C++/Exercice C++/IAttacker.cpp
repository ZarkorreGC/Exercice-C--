#include "IAttacker.h"

IAttacker::IAttacker( float _strength) : strength(0.f)
{

	strength = _strength;

}

void IAttacker::Attaque(Alive* target)
{
	
	target->Set_dommage(strength);
	
}
