#pragma once
#include<iostream>
using namespace std;
class metro
{
protected:
	int no_of_buses=100;
	int no_of_stations=10;
	
public:
	metro();
	void set_buses(int);
	int get_buses();
	void set_stations(int);
	int get_stations();
	virtual void display();
	
};
class employee :public metro
{
protected:
	char*name;
	int id;
	int age;
public:
	employee();
	employee(char*, int, int);
	void set_name(char*);
	char*get_name();
	void set_id(int);
	int get_id();
	void set_age(int);
	int get_age();
	void display();
	~employee();
};
class cleaner:public employee{
	int station_no;
	int shift_no;

public:

	cleaner();
	cleaner(char*, int, int, int, int);
	void set_stationno(int);
	int get_stationno();
	void set_shift(int);
	void display();
};
class manager :public employee{

	int station_no;
	int shift_no;
public:
	manager();
	manager(char*, int, int, int, int);
	void set_station(int);
	int get_station();
	void set_sh(int);
	void display();
};
class conductor :public employee {
	int bus_no;
public:

	conductor();
	conductor(char*, int,int, int);
	void set_busno(int);
	int get_busno();
	void display();

};
class ticket
{
	friend class ticket_booth;
public:
	virtual void PrintTicket() = 0;

};
class economy : public ticket
{
	friend class ticket_booth;
	static double eprice;

 protected:
	 economy();
public:
	void PrintTicket();
	static double show_eprice();
};
class business :public ticket{
	friend class ticket_booth;
	static double bprice;
protected:
	business();
public:
	void PrintTicket();
	static double show_bprice();
	

};
class firstClass :public ticket{
	friend class ticket_booth;
	static double fprice;
protected:
	firstClass();
public:
	void PrintTicket();
	static double show_fprice();
};
class ticket_booth
{public:
	static ticket* buy_ticket(int);
	
};