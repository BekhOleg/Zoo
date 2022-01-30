
#include "ALlstandartInclude.h"
  


    Staff::Staff()
	{

		name = new char[50];
		strcpy_s(name, 49, "Oleg");
		position = 1;
		int r = rand() % 2;
		if (r == 0) gender = Gender::Male;
		else gender = Gender::Female;
		int ran = rand() % 5;
		if (ran == 0) position = Position::Manager;
		else if (ran == 1) position = Position::Securityguard;
		else if (ran == 2) position = Position::Warehousemanager;
		else if (ran == 3) position = Position::Ñashier;
		else if (ran == 4) position = Position::Ñleaner;
		responsibilities = new char[100];
		strcpy_s(responsibilities, 99, "Create");
		wage = 1000;
		fine = 0;
	}

    Staff::~Staff()
	{
		if (name != nullptr) delete[] name;
		if (responsibilities != nullptr) delete[] responsibilities;
	}
    void Staff::SetName(const char* name) 
	{
		if (!name || strlen(name) == 0)
			return;

		if (this->name != nullptr)
		{
			delete[] this->name;
		}

		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
	}

	void Staff::SetÑametowork(int min, int hour, int day, int month)
	{

		cametowork.min = min;
		cametowork.hour = hour;
		cametowork.day = day;
		cametowork.month = month;

	}
	void Staff::SetPosition(int position)
	{
		int ran = rand() % 5;
		if (ran == 0)
		{
			position = Position::Manager;
			wage = 3000;
		}
		else if (ran == 1)
		{
			position = Position::Securityguard;
			wage = 2000;
		}
		else if (ran == 2)
		{
			position = Position::Warehousemanager;
			wage = 2000;
		}
		else if (ran == 3)
		{
			position = Position::Ñashier;
			wage = 1500;
		}
		else if (ran == 4) position = Position::Ñleaner;
		wage = 1500;


	}
	void  Staff::Setgender(int gender)
	{
		int r = rand() % 2;
		if (r == 0) gender = Gender::Male;
		else gender = Gender::Female;
	}
	void Staff::SetResponsibilities(const char* responsibilities)
	{
		if (!responsibilities || strlen(responsibilities) == 0)
			return;

		if (this->responsibilities != nullptr)
		{
			delete[] this->name;
		}

		this->responsibilities = new char[strlen(responsibilities) + 1];
		strcpy_s(this->responsibilities, strlen(responsibilities) + 1, responsibilities);
	}
	void Staff::SetWage(int wage)
	{
		if (wage > 0)
			this->wage = wage;

	}
	void Staff::SetFine()
	{
		if (fine > 0 && fine < wage)
			this->fine = 100;
	}
	Date Staff::GetCametowork() const
	{
		return cametowork;
	}
	const char* const Staff::GetName() const
	{
		return name;
	}
	const char* const Staff::GetResponsibilities() const
	{
		return responsibilities;
	}
	int const Staff::GetPosition()
	{
		return position;
	}
	int const Staff::Getgender()
	{
		return gender;
	}
	double const Staff::Getwage()
	{
		return wage;
	}
	int const Staff::GetFine()
	{
		return fine;
	}
	void Staff::Salary(int month)
	{
		if (month < 1 || month > 12) throw "error date!";
		if (month == 12)
			wage *= 2;
	}
	void Staff::Work(int min, int hour, int day, int month)
	{
		if (day < 1 || day > 31 || month < 1 || month > 12 || hour < 0 || hour > 23 || min < 0 || min > 60) throw "error date!";
		if (hour > 9 && min > 5)
		{
			wage -= fine;
		}
		cametowork.min = min;
		cametowork.hour = hour;
		cametowork.day = day;
		cametowork.month = month;
	}
	void Staff::Show() const
	{
		cout << " Èìÿ " << name << "\n";
		cout << "Ãåíäåð " << gender << "\n";
		cout << "Äîëæíîñòü " << position << "\n";
		cout << "Îáÿçîíîñòü: " << responsibilities << "\n";
		cout << "Çàðïëàòà" << wage << "\n";
		cout << "Øòðàô: " << fine << "\n";
	}
	



	





	


	
