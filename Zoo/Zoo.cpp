#include "ALlstandartInclude.h"
#include "Zoo.h"





int main()
{
	setlocale(0, "");
	//Staff Oleg("Oleg", 32, 23, "apprentice programmers", 23, 23); // конструктор с параметрами
	//Animals Barbos("Mammal", "Dvornyaga", "meat", 100, 300);
	//Oleg.Show();
	//Barbos.Show()
	Animal Rut;
	Rut.GetCPoroda();
	Staff Andrew;
	Andrew.Setgender(1);
	Andrew.SetName("Andrew");
	Andrew.SetPosition(1);
	Andrew.GetPosition();
	Andrew.GetName();
	cout << Andrew.GetName();
	cout << "\n\n\n" << Rut.GetCPoroda() << Andrew.GetPosition() << "\n";
	Staff Garri;
	
	Garri.Show();



}
