#include "Zoo.h"

   Date::Date()
	{
		day = 12;
		hour = 12;
		min = 12;
		month = 12;
	}


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
	bool Animal::GetIshungry() const
	{
		return ishungry;
	}
	bool Animal::GetMood() const
	{
		return mood;
	}
	bool Animal::SetMood()
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
			cout << classanimal << poroda << "Õî÷åò åñòü";
			return;
		}

	}

	void Animal::Sleep()
	{
		cout << classanimal << poroda << " ñïèò.";
		energy = 100;
		mood = 100;
		ishungry = true;

	}

	void Animal::Show() const
	{
		cout << " ÊëàñÆèâîòíîãî: " << classanimal << "\n";
		cout << "Ïîðîäà " << poroda << "\n";
		cout << "Òèï åäû äëÿ æèâîòíîãî " << ffood << "\n";
		cout << "Åíåðãèÿ: " << energy << "\n";
		cout << "Çäîðîâüå: " << health << "\n";
		cout << "Íàñòðîåíèå: " << mood << "\n";
	}



	Tickets::Tickets()
	{
		int r = rand() % 2;
		if (r == 0) price = Price::Adult;
		else price = Price::Ñhildren;
		adult = false;
		skidki = 20;
		price = 100;
	}

	///////////////////////////////////////////////////////
	void Tickets::SetPrice(int price)
	{

		if (Price::Adult)
			this->price = 200;
		else if (Price::Ñhildren)
			this->price = 100;

	}
	void Tickets::SetSkidki(double skidki)
	{

		this->skidki = price - 30;
	}
	void Tickets::SetTimesofDay(int min, int hour, int day, int month)
	{
		if (hour > 9 && hour < 12)
			price -= -20;

	}
	void Tickets::SetDayofweek(int dayofweek)
	{

		this->dayofweek;
	}

	bool Tickets::SetAdult()
	{
		if (adult) price -= 20;

	}
	/////////////////////////////////////////////
	bool Tickets::GetAdult() const
	{
		return adult;
	}
	Date Tickets::GetTimesofDay() const
	{
		return timesofDay;
	}
	Date Tickets::GetDayofweek() const
	{
		return dayofweek;
	}
	int Tickets::GetSkidki() const
	{
		return skidki;
	}
	int Tickets::GetPrice() const
	{
		return price;
	}



	Care::Care()
	{
		Typefoodforanimals = new char[50];
		strcpy_s(Typefoodforanimals, 49, "food");
		cleanaviary = true;
		vaccinations = true;
		partner = true;
		parasites = false;
	}

	Care::~Care()
	{
		if (Typefoodforanimals != nullptr) delete[] Typefoodforanimals;
	}
	////////////////////////////////////////////////////////////////
	void Care::SetTypefoodforanimals(const char* foodforanimals)
	{
		if (!foodforanimals || strlen(foodforanimals) == 0)
			return;

		if (this->Typefoodforanimals != nullptr)
		{
			delete[] this->Typefoodforanimals;
		}

		this->Typefoodforanimals = new char[strlen(foodforanimals) + 1];
		strcpy_s(this->Typefoodforanimals, strlen(foodforanimals) + 1, foodforanimals);
	}
	bool Care::SetCleanaviary()
	{
		if (cleanaviary == 1 && energy < 95)
			mood = true;
		energy += 5;
	}
	bool Care::SetVaccination()
	{
		health = 100;

	}
	bool Care::SetPartner()
	{
		mood = true;

	}
	void Care::SetParasites()
	{
		health -= 20;
	}
	/////////////////////////////////////////////////////////////
	bool Care::GetParasites() const
	{
		return parasites;
	}
	bool Care::GetPartner() const
	{
		return partner;
	}
	bool Care::GetVaccinations() const
	{
		return vaccinations;
	}
	bool Care::GetcLeanaviary() const
	{
		return cleanaviary;
	}
	const char* const Care::GetTypefoodforanimals() const
	{
		return Typefoodforanimals;
	}


	Service::Service()
	{
		foodforclients = new char[50];
		strcpy_s(foodforclients, 49, "BestFood");
		int r = rand() % 2;
		if (r == 0) regulations = Regulations::Dontfeed;
		else regulations = Regulations::Donotclimb;
		prices = 0;
		paravozforkids = true;
		carousel = true;
	}

	Service::~Service()
	{
		if (foodforclients != nullptr) delete[] foodforclients;

	}
	////////////////////////////////////////////////////////////////
	void Service::SetFoodforclients(const char* foodforclients)
	{
		if (!foodforclients || strlen(foodforclients) == 0)
			return;

		if (this->foodforclients != nullptr)
		{
			delete[] this->foodforclients;
		}

		this->foodforclients = new char[strlen(foodforclients) + 1];
		strcpy_s(this->foodforclients, strlen(foodforclients) + 1, foodforclients);
	}
	void Service::SetRegulations(int regulations)
	{
		this->prices = regulations;
	}
	void Service::GetPrice(int prices)
	{
		this->prices = 1000;

	}
	bool Service::SetParavozforkids()
	{
		if (paravozforkids = false)
			Staff::Warehousemanager; wage -= fine * 2;

	}
	bool Service::SetCarousel()
	{

		this->carousel = 100;
	}
	////////////////////////////////////////////////////////////////////////
	double Service::GetPrices() const
	{
		return prices;
	}
	const char* const Service::GetFoodforclients() const
	{
		return foodforclients;
	}
	int Service::GetRegulations() const
	{
		return regulations;
	}
	bool Service::GetParavozforkids() const
	{
		return paravozforkids;
	}
	bool Service::GetCarousel() const
	{
		return carousel;
	}
