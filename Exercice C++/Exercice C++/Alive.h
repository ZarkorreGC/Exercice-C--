#pragma once


class Alive
{
	float max_life;
	float actual_life;


public:

	Alive();
	Alive(float maxlife, float actuallife );


	void SetMaxlife(float maxlife);
	void Setlife(float actuallife);


	virtual float Get_max_life();
	virtual float Get_actual_life();
	virtual void Set_dommage(float dommage);


};