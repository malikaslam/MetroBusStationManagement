#include"Metro.h"
#include<iostream>
using namespace std;
metro::metro(){ no_of_buses = 20;
no_of_stations = 100;
}
void metro::display()
{
	cout << "No of Stations are : " << no_of_stations << endl;
	cout << "No of Buses are : " << no_of_buses << endl;
	cout << "***********************************" << endl;

}
void metro::set_buses(int b){ no_of_buses = b; }
int metro::get_buses(){ return no_of_buses; }
void metro::set_stations(int s){ no_of_stations = s; }
int metro::get_stations(){ return no_of_stations; }
employee::employee()
{}
employee::employee(char*n, int i, int a )
{
	int length = strlen(n);
	name = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		name[i] = n[i];
	}

	name[length] = '\0';
	age = a;
	id = i;
}
void employee::set_name(char*n)
{
	int length = strlen(n);
	name = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		name[i] = n[i];
	}

	name[length] = '\0';
}
char* employee::get_name()
{
	int length = strlen(name);
	char*temp = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		temp[i]=name[i];
	}

	temp[length] = '\0';
	return temp;
}
void employee::set_id(int i)
{
	id = i;
}
int employee::get_id()
{
	return id;
}
void employee::set_age(int a)
{
	age = a;
}
int employee::get_age()
{
	return age;
}
employee::~employee(){ delete[]name; }
void employee::display()
{

	cout << "Name is : ";
	int length = strlen(name);
	for (int i = 0; i < length; i++)
	{
		cout << name[i];
	}
	cout << endl;
	cout << "ID is: " << id << endl;
	cout << "Age is: " << age << endl;
	cout << "***********************************" << endl;

	
}
cleaner::cleaner(char*n, int no, int shift, int i, int a) : employee(n, i, a)
{

	station_no = no;
	shift_no = shift;
	
}
cleaner::cleaner(){}
void cleaner::set_stationno(int s){ station_no = s; }
int cleaner::get_stationno(){ return station_no; }
void cleaner::set_shift(int sh){ shift_no = sh; }
void cleaner::display()
{
	employee::display();
	cout <<"Station No is : "<<station_no << endl;
	if (shift_no == 1)
	{
		cout << "Shift: Morning " << endl;



	}
	else if (shift_no == 2)
	{
		cout << "Shift: Evening " << endl;

	}
	else
	{
		cout << "Shift: Not Set " << endl;

	}
	cout << "***********************************" << endl;

}
manager::manager(char*n, int no, int shift, int i, int a) : employee(n, i, a)
{

	station_no = no;
	shift_no = shift;

}
void manager::display()
{
	employee::display();
	cout << "Station No is : " << station_no << endl;
	if (shift_no == 1)
	{
		cout << "Shift: Morning " << endl;



	}
	else if (shift_no == 2)
	{
		cout << "Shift: Evening " << endl;

	}
	else
	{
		cout << "Shift: Not Set " << endl;

	}
	cout << "***********************************" << endl;

}
void manager::set_station(int s){ station_no = s; }
int manager::get_station(){ return station_no; }
void manager::set_sh(int sh){ shift_no = sh; }
conductor::conductor(char*n, int b_no, int i, int a) : employee(n, i, a)
{
	bus_no = b_no;
	
}
void conductor::display()
{
	employee::display();
	cout << "Bus no is : " << bus_no << endl;
	cout << "***********************************" << endl;
   
}
void conductor::set_busno(int b){ bus_no = b; }
int conductor::get_busno(){ return bus_no; }
void economy::PrintTicket()
{

	cout << "Economy Ticket Printed" << endl;

}
economy::economy()
{

	cout << "Economy ticket purchased. " << endl;


}
void business::PrintTicket()
{

	cout << "Business ticket printed " << endl;


}
business::business()
{

	cout << "Business ticket purchased." << endl;

}
void firstClass::PrintTicket()
{

	cout << "First Class Ticket printed " << endl;


}
firstClass::firstClass() 
{
	cout << "First Class Ticket has been purchased." << endl;

}
double economy::show_eprice()
{

	return eprice;

}
double business::show_bprice()
{
	return bprice;

}
double firstClass::show_fprice()
{
	return fprice;
}

