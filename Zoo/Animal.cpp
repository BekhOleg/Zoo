#include "Animal.h"

Animal::Animal()
{
	classanimal = new char[50];
	strcpy_s(classanimal, 49, "New cklass");
	poroda = new char[50];
	strcpy_s(poroda, 49, "New proda");
	forredbook = false;
	ffood = new char[50];
	strcpy_s(ffood, 49, "best food");
	energy = 100;
	health = 100;
	mood = true;
	ishungry = false;

}

Animal::~Animal()
{
	if (classanimal != nullptr) delete[] classanimal;
	if (poroda != nullptr) delete[] poroda;
	if (ffood != nullptr) delete[] ffood;
}
//////////////////////////////////////////////////////
void Animal::SetClassanimal(const char* classanimal)
{
	if (!classanimal || strlen(classanimal) == 0)
		return;

	if (this->classanimal != nullptr)
	{
		delete[] this->classanimal;
	}

	this->classanimal = new char[strlen(classanimal) + 1];
	strcpy_s(this->classanimal, strlen(classanimal) + 1, classanimal);
}
void Animal::SetPoroda(const char* poroda)
{
	if (!poroda || strlen(poroda) == 0)
		return;

	if (this->poroda != nullptr)
	{
		delete[] this->poroda;
	}

	this->poroda = new char[strlen(poroda) + 1];
	strcpy_s(this->poroda, strlen(poroda) + 1, poroda);
}

void Animal::SetFood(const char* typeoffood)
{
	if (!typeoffood || strlen(typeoffood) == 0)
		return;

	if (this->ffood != nullptr)
	{
		delete[] this->ffood;
	}

	this->ffood = new char[strlen(typeoffood) + 1];
	strcpy_s(this->ffood, strlen(typeoffood) + 1, typeoffood);
}
void Animal::SetEnergy(int energy)
{
	if (energy > 0)
		this->energy = 100;
	if (mood = false)
		energy -= 30;
}
void Animal::SetHealth(int health)
{
	if (energy > 0)
		this->health = 100;
}

//////////////////////////////////////////
void Animal::GetIshungry() const
{
	
}
void Animal::GetMood() const
{
	
}
void Animal::SetMood()
{
	if (mood = false)
		health -= 5;

}
const char* const Animal::GetClassanimal() const
{
	return classanimal;
}
const char* const Animal::GetCPoroda() const
{
	return poroda;
}
const char* const Animal::GetCFood() const
{
	return ffood;
}
int Animal::GetEnergy() const
{
	return energy;
}int Animal::GetHealth() const
{
	return health;
}
void Animal::Walk()
{
	energy -= 20;
	if (energy <= 50)
	{
		ishungry = true;
		cout << classanimal << poroda << "Хочет есть";
		return;
	}

}

void Animal::Sleep()
{
	cout << classanimal << poroda << " спит.";
	energy = 100;
	mood = 100;
	ishungry = true;

}

void Animal::Show() const
{
	cout << " КласЖивотного: " << classanimal << "\n";
	cout << "Порода " << poroda << "\n";
	cout << "Тип еды для животного " << ffood << "\n";
	cout << "Енергия: " << energy << "\n";
	cout << "Здоровье: " << health << "\n";
	cout << "Настроение: " << mood << "\n";
}
