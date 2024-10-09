#pragma once


class Alive
{
	float max_live;
	float actual_live;

	Alive();

public:


	virtual float Get_max_live();
	virtual float Get_actual_live();
	virtual float Set_dommage();


};

