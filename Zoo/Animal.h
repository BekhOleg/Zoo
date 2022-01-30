#pragma once
#include "ALlstandartInclude.h"
class Animal
{
protected:
	char* classanimal;
	char* poroda;
	bool forredbook; //из красной книги
	char* ffood; // траоведное/ плотоядное
	int energy;
	int health;
	bool mood; // настроение 
	bool ishungry;
public:

	Animal();
	~Animal();
	void SetMood();
	void SetClassanimal(const char* classanimal);
	void SetPoroda(const char* poroda);
	void SetFood(const char* typeoffood);
	void SetEnergy(int energy);
	void SetHealth(int health);
	void SetmMod();
	void GetIshungry() const;
	void GetMood() const;
	const char* const GetClassanimal() const;
	const char* const GetCPoroda() const;
	const char* const GetCFood() const;
	int GetEnergy() const;
	int GetHealth() const;
	void Walk();
	void Sleep();
	void Show() const;
};